#include<bits/stdc++.h>
using namespace std;

bool check(string str,int i,int j)
{
    //base case
    if(i>j)
    {
        return true;
    }
    //ek case solve krna
    if(str[i]!=str[j])
    {
        return false;

    }

    //baki case recursion solve krega
    return check(str,i++,j--);
}

bool check_op(string str,int i)
{
    //base case
    int temp_pointer=str.length()-i-1;
    if(i>temp_pointer) 
    {
        return true;
    }
    if(str[i]!=str[temp_pointer]){
        return false;
    }
    return check_op(str,i+1);
}

int main()
{
    string s="abbcdbba";
    cout<<endl;
    // cout<<check(s,0,s.length()-1)<<endl<<endl;
    cout<<check_op(s,0)<<endl<<endl;
}