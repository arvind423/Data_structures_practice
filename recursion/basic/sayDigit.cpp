/*
432 -> four three two
*/
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n)
{

    string digit[10]={"Zero","one","two","three","four",
    "five","six","seven","eight",
    "nine"};

    //base case
    if(n==0)
    {
        return;
    }
    //processing
    int lastDigit=n%10;
    //r.r
    sayDigit(n/10);
    cout<<digit[lastDigit]<<" ";


}
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    sayDigit(n);
    cout<<endl<<endl;

}