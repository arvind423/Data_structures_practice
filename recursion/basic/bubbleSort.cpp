//bubble sort using recursion
#include<bits/stdc++.h>
using namespace std;
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sortArr(int *arr,int n)
{
    print(arr,n);
    cout<<endl<<endl;
    //base case- already sorted
    if(n==0 || n==1)
        return;
    //ek case solve krna
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    //baki case recursion solve kr lega
    sortArr(arr,n-1);

}
int main()
{
    int arr[5]={1,5,10,9,2};
    sortArr(arr,5);
    cout<<endl;
    print(arr,5);
    cout<<endl<<endl;
}