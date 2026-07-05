class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        
        int n = arr.size();
        if(k>n)
        return-1;
        long long start=*max_element(arr.begin(),arr.end());
        long long end =0;
        for(int x:arr)
        end+=x;
        long long ans =-1;
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            int ships=1;
            long long crew=0;
            for(int i =0; i<n; i++)
            {
                if(crew+arr[i]<=mid)
                {
                    crew+=arr[i];
                }
                else
                {
                    ships++;
                    crew=arr[i];
                }
            }
            if(ships<=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return (int)ans;
    }
};