//permautation of string
//"abc"
//["abc","acb","bac","bca","cab","cba"]


#include<bits/stdc++.h>
using namespace std;


void print(vector<string> str)
{
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<str[i].size();j++)
        {
            cout<<str[i][j];
        }
        cout<<endl;
    }
}
void solve(string str,int index,vector<string> &ans)
{
    //base case
    if(index>=str.size())
    {
        ans.push_back(str);
        return;
    }

    //loop through original string at every index
    //swap the value with the current index value
    for(int i=index;i<str.size();i++)
    {
        swap(str[index],str[i]);
        solve(str,index+1,ans);
        //backtracking

        swap(str[index],str[i]);
    }

}
vector<string> permutation(string str){
    //for putting all the permutation in vector
    vector<string> ans;
    int index=0;
    solve(str,index,ans);
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string str="abc";
    cout<<endl;
    vector<string> ans=permutation(str);
    sort(ans.begin(),ans.end());
    print(ans);

}