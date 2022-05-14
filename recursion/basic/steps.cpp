#include<bits/stdc++.h>
using namespace std;
void steps(int s,int e)
{
    cout<<s<<" "<<e<<endl;
    if(s==e)
    {
        cout<<"reached home"<<"\n";
        return;
    }
    
    steps(s+1,e);


}
int main()
{
    int s=1,e=10;
    steps(s,e);
}