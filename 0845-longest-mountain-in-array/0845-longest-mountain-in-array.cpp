class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int up=0, down=0, ans=0;
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                if(down>0)
                up=down=0;
                up++;
            }
            else if(arr[i]<arr[i-1]){
                if(up>0)
                down++;
                }
            else{
                up=0;
                down=0;
            }
            if(up>0 && down>0)
            ans=max(ans,up+down+1);
        }
        return ans;
    }
};