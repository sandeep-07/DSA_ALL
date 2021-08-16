// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>


string convert(int n,unordered_map<int,string>& mp){
    
    if(n==0)
    return "";
    string ftosclast=convert(n/10,mp);
    string last=mp[n%10];

    return ftosclast+" "+last;

}
void solve(){
    int n=210;
    unordered_map<int,string> mp;
mp[0]="zero";mp[1]="one";mp[2]="two";mp[3]="three";mp[4]="four";
mp[5]="five";mp[6]="six";mp[7]="seven";mp[8]="eight";mp[9]="nine";

    string ans=convert(n,mp);
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



