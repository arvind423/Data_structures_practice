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




void solve(vector<int> arr,int target,int index,vector<int> output,vector<vector<int>> &ans)
{
    //base case
    if(target==0)
    {
        ans.push_back(output);
        return;
    }

    if(target<0)
    {
        return;
    }
    if(index>=arr.size())
    {
        return;
    }
    //skip the element
    solve(arr,target,index+1,output,ans);

    //pick the element
    output.push_back(arr[index]);
    solve(arr,target-arr[index],index,output,ans);
    //now backtrack the ans
    output.pop_back();

    
     
}
vector<vector<int>> combinationalSum(vector<int> &arr,int target)
{
    vector<int> output;
    vector<vector<int>> ans;
    int index=0;
    sort(arr.begin(),arr.end());
    //remove duplicates
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    //2, 4, 6, 8
    solve(arr,target,index,output,ans);
    return ans;
}

int main()
{
    vector<int> arr={2, 3, 5};
    vector<vector<int>> ans=combinationalSum(arr,8);
    print(ans);
}