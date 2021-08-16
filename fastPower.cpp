// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>
#define mod 1000000007

int fastPower(int n,int p)
{
     if(n==0)
        return 0;
        else if(p==0)
        return 1;
        else if(p==1)
        return n;
        if(p%2==0)
        {
            long long x=power(n,p/2)%mod;
            return ((x%mod)*(x%mod))%mod;
        }
        return ((n%mod)*(power(n,p-1)%mod))%mod;
        
}
void solve(){
    int n,p;
    cin>>n>>p;
    cout<<fastPower(n,p);

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



