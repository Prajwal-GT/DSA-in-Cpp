class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> seen;
        int running_sum = 0;
        int prev_remainder = 0;

        for (int num : nums) {
            running_sum += num;
            int remainder = running_sum % k;
            if (seen.count(remainder)) {
                return true;
            }
            seen.insert(prev_remainder);
            prev_remainder = remainder;
        }

        return false;
    }
};