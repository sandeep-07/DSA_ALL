// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>
bitset<30> col,d1,d2;
void NQueens(int i,int n,int& ans){
    if(i==n){
        ans++;
        return;
    }
    for(int j=0;j<n;j++)
    {
        if(col[j]==0 and d1[i-j+n-1]==0 and d2[i+j]==0)
        {
            col[j]=d1[i-j+n-1]=d2[i+j]=1;
            NQueens(i+1,n,ans);
            col[j]=d1[i-j+n-1]=d2[i+j]=0;
        }
    }
}
void solve(){
    int n;
    cin>>n;
    int ans=0;
    NQueens(0,n,ans);
    cout<<ans;
    

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