class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int left = k;
        int right = k;
        int min_val = nums[k];
        int max_score = nums[k];

        while (left > 0 || right < n - 1) {
            int left_val = (left > 0) ? nums[left - 1] : 0;
            int right_val = (right < n - 1) ? nums[right + 1] : 0;

            if (left_val >= right_val) {
                --left;
                min_val = min(min_val, nums[left]);
            } else {
                ++right;
                min_val = min(min_val, nums[right]);
            }
            max_score = max(max_score, min_val * (right - left + 1));
        }

        return max_score;
    }
};