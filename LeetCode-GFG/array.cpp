#include<iostream>
#include<climits>
using namespace std;
int main()
{
    
    int arr[6]={ 7,8 ,3 ,7, 9,2};
    int ans = INT_MIN;
    for(int i =0; i<6;i++)
        {
        if(arr[i]>ans)
        ans= arr[i];
        }
    cout<<ans;
return 0;    
  }
//finding the even number
int arr[5]={2,7,4,9,6};

int count=0;

for(int i=0;i<5;i++)
{
    if(arr[i]%2==0)
    {
        count++;
    }
}

cout<<count;
// linearch search code
int arr[5]={10,20,30,40,50};

int target=30;

for(int i=0;i<5;i++)
{
    if(arr[i]==target)
    {
        cout<<"Found at index "<<i;
        break;
    }
}