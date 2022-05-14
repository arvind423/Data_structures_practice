#include<bits/stdc++.h>
using namespace std;
void print(vector<string> str)
{
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<str[i].size();j++)
        {
            cout<<str[i][j];
        }
        cout<<endl;
    }
}
bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m)
   {
       if((x >= 0 && x<n) && (y >= 0 && y<n) && visited[x][y] == 0 && m[x][y] == 1)
           return true;
       else
           return false;
   }
   void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y,  
   vector<vector<int>> &visited, string path)
   {
    if(x == n-1 && y == n-1)
       {
           ans.push_back(path);
           return ;
       }
       visited[x][y] = 1;
       int newx = x+1;
       int newy = y;
       if(isSafe(newx,newy,n,visited,m))
       {
           path.push_back('D');
           solve(m,n,ans,newx,newy,visited,path);
           path.pop_back();
       }
       newx = x;
       newy = y-1;
       if(isSafe(newx,newy,n,visited,m))
       {
           path.push_back('L');
           solve(m,n,ans,newx,newy,visited,path);
           path.pop_back();
       }
       newx = x;
       newy = y+1;
       if(isSafe(newx,newy,n,visited,m))
       {
           path.push_back('R');
           solve(m,n,ans,newx,newy,visited,path);
           path.pop_back();
       }
       newx = x-1;
       newy = y;
       if(isSafe(newx,newy,n,visited,m))
       {
           path.push_back('U');
           solve(m,n,ans,newx,newy,visited,path);
           path.pop_back();
       }
       visited[x][y] = 0;
   }

vector < string > searchMaze(vector < vector < int >> & arr, int n) {

   // Write your code here.
   vector<string> ans;
   int srcx = 0;
    int srcy = 0;

       if(arr[0][0] == 0)

           return ans;

       vector<vector<int>> visited = arr;

       for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)

           {

               visited[i][j] = 0;

           }
        }

       string path = "";
       solve(arr,n,ans,srcx,srcy,visited,path);
       sort(ans.begin(),ans.end());
       return ans;

}

int main()
{
    vector<vector<int>> m=
        {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
        int n=4;
        vector<string> ans=searchMaze(m,n);
        cout<<endl;
        print(ans);

}