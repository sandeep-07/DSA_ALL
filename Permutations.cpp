// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>
void permutations(string s,int i){
    if(i==s.size())
    {
        cout<<s<<" ";
        return;
    }
    
    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        permutations(s,i+1);
        swap(s[j],s[i]);
    }
}
void solve(){
    char s[10];
    cin>>s;
    permutations(s,0);
}
int main()
{
    IOS;
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}