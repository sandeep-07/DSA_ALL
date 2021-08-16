// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>

void generatePar(char* out,int n,int open,int close,int idx){
    if(idx==2*n){
        out[idx]='\0';
        cout<<out<<endl;
        return;
    }    
    if(open<n){
        out[idx]='(';
        generatePar(out,n,open+1,close,idx+1);
    }
    if(close<open){
        out[idx]=')';
        generatePar(out,n,open,close+1,idx+1);
    }
}

void solve(){
    int n=3;
    char output[10];
    generatePar(output,n,0,0,0);
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



