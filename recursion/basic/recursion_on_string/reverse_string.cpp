//reverse a string using recursion
#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int i,int j)
{
    // cout<<s<<" "<<i<<" "<<j<<endl<<endl;
    //base case
    if(i>j)
    {
        return;
    }
    swap(s[i],s[j]);
    i++;j--;
    //recursive call
    reverse(s,i,j);
}
int main()
{
    string str="menariya";
    reverse(str,0,str.length()-1);
    cout<<endl;
    cout<<str<<endl<<endl;
}