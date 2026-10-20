class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int p=0;
        for(int i:nums){
            if(i>target)return ans;
            if(i==target)ans.push_back(p);
            p++;
        }
        return ans;
    }
};