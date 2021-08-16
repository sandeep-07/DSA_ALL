// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>

int stringToInt(string s){
    // sandeep
    if(s=="")
    return 0;
    
    int fToSecLast=stringToInt(s.substr(0,s.length()-1));
    int ans=fToSecLast*10+((s[s.length()-1])-'0');
    return ans;
}
void solve(){
    string s;
    cin>>s;
    // "1234" -> 1234
    cout<<stringToInt(s);

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



