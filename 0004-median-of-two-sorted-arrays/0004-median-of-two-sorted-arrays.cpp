class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if(a.size()>b.size())
        {
            swap(a,b);
        }
        int m=a.size();
        int n=b.size();
        int low=0;
        int high=m;
        while(low<=high){
            int A = (low+high)/2;
            int B = (m+n+1)/2-A;
        int Aleft;
        if(A==0)
        {
            Aleft=INT_MIN;
        }
        else
        {
            Aleft=a[A-1];
        }
        int Aright;
        if(A==m)
        {
            Aright=INT_MAX;
        }
        else
        {
            Aright=a[A];
        }
        int Bleft;
        if(B==0)
        {
            Bleft=INT_MIN;
        }
        else
        {
            Bleft = b[B-1];
        }
        int Bright;
        if(B==n)
        {
            Bright=INT_MAX;
        }
        else
        {
            Bright = b[B];
        }
    if(Aleft<=Bright && Bleft<=Aright){
            if((m+n)%2==1){
        return max(Aleft, Bleft);
    }
    else{
        return (max(Aleft, Bleft) +
         min(Aright, Bright)) / 2.0;
        }
            }
    if(Aleft>Bright)
    {
        high=A-1;
    }
    else
    {
        low=A+1;
    }
        }
    return 0.0;
}
};