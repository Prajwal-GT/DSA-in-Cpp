/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 0;
        int high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                low = mid + 1; 
            } else {
                high = mid;   
            }
        }
        int peak = low;
        int leftResult = binarySearch(target, mountainArr, 0, peak, true);
        if (leftResult != -1) {
            return leftResult; 
        }
        return binarySearch(target, mountainArr, peak + 1, n - 1, false);
    }

private:
    int binarySearch(int target, MountainArray &mountainArr, int low, int high, bool isAscending) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int val = mountainArr.get(mid);
            
            if (val == target) {
                return mid;
            }
            
            if (isAscending) {
                if (val < target) low = mid + 1;
                else high = mid - 1;
            } else {
                if (val > target) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1; 
    }
};