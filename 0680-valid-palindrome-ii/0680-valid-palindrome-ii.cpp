class Solution {
public:
    bool validPalindrome(string s) {
        int left =0; 
        int right = s.length()-1;
        while(left<right){
            if(s[left] ==s[right]){
            left++;
            right--;
        }else{
            return isPal(s,left+1,right) || isPal(s,left,right-1);
        }
        }
        return true;
    }
    bool isPal(string &s, int left, int right){
         while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
         }
         return true;
    }
};