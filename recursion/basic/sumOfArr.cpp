//sum of array element using recursion
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    return arr[0]+sum(arr+1,n-1);
}

int main()
{
    int arr[5]={6,3,4,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    cout<<sum(arr,n)<<endl<<endl;
}