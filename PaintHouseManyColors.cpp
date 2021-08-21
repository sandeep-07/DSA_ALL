//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-many-colors-official/ojquestion
// welcome to imsandeep world
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define take(x) ll x;cin>>(x);
#define ai(arr,n) vll arr(n,0); for(int i=0;i<arr.size();i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) vector<vll>arr(m,vll(n,0)); for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define ll long long int
#define vll vector<long long int>
const ll MOD = 1e9+7, M = 2e6+7;
 
void  single()
{
     int n,k;
    cin>>n>>k;
    ll dp[n][k];
    
    ll day[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++)
        cin>>day[i][j];
    }
    
    for(int i=0;i<k;i++)
    dp[0][i]=day[0][i];
    // for(int i=0;i<k;i++)
    // cout<<dp[0][i]<<" ";
    // cout << endl;
    for(int i=1;i<n;i++){
        for(int j=0;j<k;j++){
            ll mn=INT_MAX;
            for(int l=0;l<k;l++)
            {
                if(l!=j)
                mn=min(mn,dp[i-1][l]);
            }
            // cout << mn << "+"<<day[i][j]<<" ";
            dp[i][j] = day[i][j] + mn;
        }
    }

    // cout<<endl;
    ll mn=dp[n-1][0];
    for(ll j=0;j<k;j++)
    mn=min(mn,dp[n-1][j]);
    cout << mn << endl;
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<k;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    
}
int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("./input.txt","r",stdin);
freopen("./output.txt","w",stdout);
freopen("../error.txt","w",stderr);
#endif
ll t;
t = 1;
// cin>>t;
while(t--)
{
    single();
}
return 0;
}



