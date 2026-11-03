class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        for (int i = 0; i < nums.size(); ++i) {
            int val = abs(nums[i]);
            int target_idx = val - 1;
            if (nums[target_idx] < 0) {
                duplicates.push_back(val);
            } else {
                nums[target_idx] = -nums[target_idx]; 
            }
        }

        return duplicates;
    }
};