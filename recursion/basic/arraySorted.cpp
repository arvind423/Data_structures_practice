//we have to check that the array is sorted or not
//using recursion

#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size)
{
    //base case
    if(size==0 || size==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }

    return isSorted(arr+1,size-1);


}

int main()
{
    int arr[5]={2,5,11,10,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    // cout<<n<<endl<<endl;
    cout<<isSorted(arr,n)<<endl<<endl;
}