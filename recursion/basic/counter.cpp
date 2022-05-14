#include<bits/stdc++.h>
using namespace std;
void decCounter(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    //processing
    cout<<n<<endl;
    //recurrence relation
    decCounter(n-1);
}
void incCounter(int n)
{
    if(n==0)
    {
        return;
    }
    incCounter(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    // decCounter(n);
    incCounter(n);
}