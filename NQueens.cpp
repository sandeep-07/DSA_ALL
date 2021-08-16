// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>

bool isSafe(vector<vector<int>>& a,int i,int j){
    int n=a.size();
    // search in jth col
    for(int k=0;k<i;k++)
    {
        if(a[k][j]==1)
        return false;
    }

    // search in north west
    int x=i;
    int y=j;
    while(x>=0&&y>=0){
        if(a[x][y]==1)
        return false;
        x--;
        y--;
    }
    x=i;
    y=j;
    while(x>=0&&y<n){
        if(a[x][y]==1)
        return false;
        x--;
        y++;
    }
    return true;
}
bool NQueens(vector<vector<int>>& a,int i,int n){
    if(i==n)
    {
        // print a
        for(auto x:a)
        {
            for(auto y:x)
            cout<<y<<" ";
            cout<<endl;
        }

        cout<<endl;
        return true;
    }

    for(int j=0;j<n;j++){

        if(isSafe(a,i,j))
        {
            a[i][j]=1;

            bool next=NQueens(a,i+1,n);
            if(next){
                return true;
            }

            a[i][j]=0;
        }
    }
    return false;

}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));
    bool x=NQueens(a,0,n);

}
int main()
{
    IOS;
    int t;
    t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }

}



