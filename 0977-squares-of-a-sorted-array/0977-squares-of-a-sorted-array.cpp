class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        vector<int> result(n);
        int left =0;
        int right=n-1;
        int position =n-1;
        while(left<=right){
            int leftvalue = abs(nums[left]);
            int rightvalue = abs(nums[right]);
            if(leftvalue>rightvalue){
                result[position] = leftvalue *leftvalue;
                left= left+1;
            }
            else{
                result[position] = rightvalue *rightvalue;
                right=right-1;
            }
            position=position-1;
        }
        return result;
    }
};