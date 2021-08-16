// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>

void generateSubsequence(string in,char *out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }    
    out[j]=in[i];
    generateSubsequence(in,out,i+1,j+1);
    out[j]='\0';
    generateSubsequence(in,out,i+1,j);
}

void solve(){
    string input="abc";
    char output[4];
    generateSubsequence(input,output,0,0);
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



