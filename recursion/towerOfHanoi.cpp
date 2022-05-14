//all the approach is been discussed in notebook
//will move n-1 disk from src(A) to temp tower(c) using B
//then will move remaining one disk from tower A to B
//which is destination
#include<bits/stdc++.h>
using namespace std;


void toh(int n,char src,char dest,char temp)
{
    if(n==0)
    {
        return;
    }
    //move n-1 disk from src to temp using dest
    toh(n-1,src,temp,dest);
    cout<<"move "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,temp,dest,src);
}

int main()
{
    int n=3;
    toh(3,'A','B','C');
}