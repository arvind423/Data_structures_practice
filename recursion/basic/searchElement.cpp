//task is to find that the number is present or not in arr
#include<bits/stdc++.h>
using namespace std;

bool searching(int *arr,int n,int k)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    return searching(arr+1,n-1,k);
}

int main()
{
    int arr[5]={6,3,4,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    int key=5;
    cout<<searching(arr,n,key)<<endl<<endl;
}