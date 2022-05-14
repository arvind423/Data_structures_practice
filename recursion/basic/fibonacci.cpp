#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    //base case
    if(n==0 || n==1)
    {
        return n;
    }
    //recurrence relation
    return fib(n-1)+fib(n-2);

}

int fib_loop(int n)
{
    int a=1,b=1;
    int next;
    for(int i=3;i<=n;i++){
        next=a+b;
        a=b;
        b=next;
        
    }
    return next;
}

int main()
{
    int n;
    cin>>n;
    cout<<"\n";
    // cout<<fib(n)<<endl;
    cout<<fib_loop(n)<<endl;
}