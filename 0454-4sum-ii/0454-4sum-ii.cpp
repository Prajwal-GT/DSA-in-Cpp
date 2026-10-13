class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
         unordered_map<int, int> sum_ab;
        for (int a : nums1) {
            for (int b : nums2) {
                sum_ab[a + b]++;
            }
        }
        int count = 0;
        for (int c : nums3) {
            for (int d : nums4) {
                if (sum_ab.count(-(c + d))) {
                    count += sum_ab[-(c + d)];
                }
            }
        }
        return count;
    }
};