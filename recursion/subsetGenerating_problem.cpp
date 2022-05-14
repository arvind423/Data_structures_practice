//the approach i have written in note book
//we will maintain one i/p array , one index of curr element in array
// and one output vector which stores the output subset
//and one ans vector of vector which stores all the output vector

//the approach is simple at any array index we will call two recursive call
//one in case of we exclude the curr element
//one for including the element 
//and increment index
//base case is index>=array size

#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void subset(vector<int> input,int index,vector<int>output,vector<vector<int>> &ans)
{
    //base case
    if(index>=input.size())
    {
        //save the output array to ans array
        ans.push_back(output);
        return;
    }

    //ek bar exclude
    subset(input,index+1,output,ans);

    //ek bar include krna
    int element=input[index];
    //save the element to output array
    output.push_back(element);
    subset(input,index+1,output,ans);
}

vector<vector<int>> generateSubset(vector<int> nums)
{
    vector<int> output;
    int index=0;
    vector<vector<int>> ans;
    subset(nums,0,output,ans);
    //call by refrence
    //return the ans vector
    return ans;
}

int main()
{
    vector<int> arr={1,2,3};
    vector<vector<int>> op=generateSubset(arr);
    sort(arr.begin(),arr.end());
    print(op);
}