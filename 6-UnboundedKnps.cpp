// welcome to imsandeep world
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define take(x) ll x;cin>>(x);
#define ai(arr,n) vll arr(n,0); for(int i=0;i<arr.size();i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) vector<vll>arr(m,vll(n,0)); for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}

#define vll vector<long long int>
#define ll long long int
const ll MOD = 1e9+7, M = 2e6+7;
 
void  single()
{
    take(n);
    ai(val, n);
    ai(wt, n);
    take(W);

    long long int dp[W + 1]={0};

    for (int i = 1; i <= W;i++)
    {

            ll mx = 0;
        for (int j = 0; j < n;j++)
        {
            if(i-wt[j]>=0)
            {
                ll quant1 = val[j] + dp[i - wt[j]];             
                mx = max(mx,quant1);
            }
        }
        dp[i] = mx;
    }
    // ao(dp);
    // cout << endl;
    cout << dp[W];
}
int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("./input.txt","r",stdin);
freopen("./output.txt","w",stdout);

#endif
ll t;
t = 1;
// cin>>t;
while(t--)
{
    single();
}
}



