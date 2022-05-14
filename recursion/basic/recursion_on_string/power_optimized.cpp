//we have to calculate the power
// of a number a^b

#include<bits/stdc++.h>
using namespace std;
long long int power(int a,int b)
{
    //power of 0 of any number is 1;
    if(b==0)
    {
        return 1;
    }
    //power 1 of any number is number itself
    if(b==1)
    {
        return a;
    }
    //baki case recursion solve krega
    long long int ans=power(a,b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }


}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<endl<<endl;
    cout<<power(a,b)<<endl<<endl;
}