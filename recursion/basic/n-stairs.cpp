/*
You have been given a number of stairs.
Initially, you are at the 0th stair, and you need to reach the Nth stair. 
Each time you can either climb one step or two steps. 
You are supposed to return the number of distinct ways in which you can climb 
from the 0th step to Nth step.

N=3
We can climb one step at a time i.e. {(0, 1) ,(1, 2),(2,3)} or 
we can climb the first two-step and then one step i.e. {(0,2),(1, 3)} or 
we can climb first one step and then two step i.e. {(0,1), (1,3)}.

*/

#include<bits/stdc++.h>
using namespace std;
int nStairWays(int n)
{

    //base case
    if(n<0)
    {
        return 0;

    }
    if(n==0)
    {
        return 1;
    }
    //recurrence relation
    int way=nStairWays(n-1)+nStairWays(n-2);
    return way;

}

int main()
{
    int n;
    cin>>n;
    cout<<"\n";
    cout<<nStairWays(n)<<endl;
}