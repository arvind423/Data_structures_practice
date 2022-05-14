#include<iostream>
using namespace std;
int fact(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    //small problem
    int smallProb=fact(n-1);
    int bigProb=n*smallProb;
    return bigProb;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}