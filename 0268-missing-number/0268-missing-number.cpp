class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int excepted_num = n*(n+1)/2;
        int actual_num = 0;
        for(int i=0; i<nums.size(); i++)
        {
            actual_num+=nums[i];
        }
        return excepted_num-actual_num;
    }
};