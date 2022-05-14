//binary search using recursion
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int s,int e,int k)
{
    if(s>e)
    {
        return 0;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k)
    {
        return mid;
    }
    if(arr[mid]<k)
    {
        return binarySearch(arr,s+1,e,k);
    }
    else
    {
        return binarySearch(arr,s,mid-1,k);
    }

}

int main()
{
    int arr[5]={2,4,12,16,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=18;
    cout<<endl;
    cout<<binarySearch(arr,0,n-1,key)<<endl<<endl;
}