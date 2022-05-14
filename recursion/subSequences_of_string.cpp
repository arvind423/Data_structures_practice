//subsequences of string
//"abc"
//["","a","b","c","ab","ac","bc","abc"]

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
void solve(string str,int index,string output,vector<string> &ans)
{
    //base case
    if(index>=str.length())
    {
        ans.push_back(output);
        return;
    }

    //exclude krna charactr ko
    solve(str,index+1,output,ans);

    //include krna
    char ch=str[index];
    output+=ch;
    solve(str,index+1,output,ans);
}
vector<string> subSequences(string str)
{
    string output="";
    int index=0;
    vector<string> ans;
    solve(str,index,output,ans);
    return ans;
}

int main()
{
    string str="abc";
    vector<string> ans=subSequences(str);
    sort(ans.begin(),ans.end());
    print(ans);
}