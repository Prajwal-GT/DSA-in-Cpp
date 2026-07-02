#include<iostream>
using namespace std;
int main()
{    
   //reverse array
 int arr[5]={1,2,3,4,5};
 int left = 0;
 int right = 4;
 while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
 }
 for(int i=0; i<5; i++){
    cout<<arr[i]<< " ";
 }
 return 0;
}
//largest array found
int arr[5]={10,70,25,90,40};

int largest=arr[0];

for(int i=1;i<5;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
cout<<largest;


