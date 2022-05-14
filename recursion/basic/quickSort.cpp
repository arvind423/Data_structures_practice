#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int *arr,int s,int e)
{
    //pivot element
    int pivot=arr[s];
    //count the element which are <=pivot
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot){
            count++;
        }
    }

    //calculating the right place for pivot element
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);

    //left part <=pivot right part >pivot

    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

}
void quickSort(int *arr,int s,int e)
{
    

    //base case
    if(s>=e)
    {
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}

int main()
{
    int arr[]={5,2,77,34,10,16,11,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    quickSort(arr,0,n-1);
    cout<<endl;
    print(arr,n);
    cout<<endl;

}