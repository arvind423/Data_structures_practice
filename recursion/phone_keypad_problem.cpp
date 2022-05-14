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

void solve(string str,int index,string output,
            string mapping[],vector<string> &ans)
{
    //base case
    if(index>=str.length())
    {
        ans.push_back(output);
        return;
    }

    //"23"
    int number=str[index]-'0';  //2 in first pass
    //value corrospon to the index
    string value=mapping[number]; //abc in case of 2

    //iterate over "abc" and call recursive function
    for(int i=0;i<value.length();i++)
    {
        //adding character of value string to output
        output.push_back(value[i]);
        solve(str,index+1,output,mapping,ans);
        //pop back output string
        output.pop_back();
    }
    
}

vector<string> generateString(string str)
{
    string output="";
    int index=0;
    vector<string> ans;
    string mapping[10]={"","","abc","def","ghi","jkl",
    "mno","pqrs","tuv","wxyz"};
    solve(str,index,output,mapping,ans);
    return ans;
}


int main()
{
    string str="234";
    vector<string> ans=generateString(str);
    // sort(ans.begin(),ans.end());
    print(ans);
}