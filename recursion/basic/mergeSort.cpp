#include<bits/stdc++.h>
using namespace std;


void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


void merge(int *arr,int s,int e)
{
    // cout<<"value of s : "<<s<<" and e: "<<e<<endl;
   
    int mid=(s+e)/2;
    int n1=mid-s+1;
    int n2=e-mid;
    int *arr1=new int[n1];
    int *arr2=new int[n2];
    int k=s;

    //copy left array
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[k++];
    }
// cout<<endl;
// cout<<"array 1 copied value "<<endl;
    // print(arr1,n1);
// cout<<endl;
    //copy right array
    k=mid+1;
    for(int i=0;i<n2;i++)
    {
        arr2[i]=arr[k++];
    }
// cout<<"array2 copied value "<<endl;
    // print(arr2,n2);
    // cout<<endl;

    //merge 2 sorted array
    int index1=0;
    int index2=0;
    int index_k=s;

    while(index1<n1 && index2<n2)
    {
        if(arr1[index1]<arr2[index2])
        {
            arr[index_k++]=arr1[index1++];
        }
        else{
            
            arr[index_k++]=arr2[index2++];
        }
    }

    while(index1<n1)
    {
            arr[index_k++]=arr1[index1++];

    }
    while(index2<n2)
    {
            arr[index_k++]=arr2[index2++];

    }
    

    //freeing memory allocated dynamically
    delete []arr1;
    delete[]arr2;

// cout<<endl;
    // cout<<"sorted array"<<" "<<endl<<endl;
    // print(arr,k);
    // cout<<endl;



}
void mergeSort(int *arr,int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    //left half solve krna
    mergeSort(arr,s,mid);
    //for right half
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
    

}
int main()
{
    int arr[]={8, 4, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    mergeSort(arr,0,n-1);
    cout<<endl;
    print(arr,n);
    cout<<endl;
}