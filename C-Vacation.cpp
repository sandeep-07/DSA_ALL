// https://atcoder.jp/contests/dp/tasks/dp_c
#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) ll x;cin>>(x);
#define p(x) cout<<x<<endl;
#define p2(x,y) cout<<x<<" "<<y<<endl;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define reverse(a) reverse(all(a))
#define rall(c) (c).rbegin(),(c).rend()
#define ai(arr,n) vll arr(n,0); for(int i=0;i<arr.size();i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) vector<vll>arr(m,vll(n,0)); for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define vppo(prs) for(auto x:prs){cout<<x.first<<" "<<x.second<<endl;}
#define For(__,$$,adfdf) for(int __ = $$; __<adfdf;__++)
#define Fori(__,$$,adfdf) for(int __ = $$; __>adfdf;__--)

#define countsetbits(x) __builtin_popcount(x)
#define db double
#define ll long long int
#define ull unsigned ll


#define debugger cout<<"I AM EXECUTING"<<endl
#define testcases int asdf; cin>>asdf; while(asdf--)

#define space cout<<endl

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long int>
#define vp vector<pair<int,int>> 
#define sc set<char>
#define si set<int>
#define pqq priority_queue
#define up unordered_map


const ll MOD = 1e9+7, M = 2e6+7;
string sconvert(ll n){stringstream ss; ss<<n; string str = ss.str(); return str;}
ll lcm(ll x, ll y) { ll res = x / __gcd(x, y); return (res * y);}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){ return (a.second > b.second); } 
 
int solve(vll a,vll b,vll c,int k,int asf,int n){
    if(k==n)
    return asf;


    
}
void  single()
{
    take(n);
    mi(a, n,3);
    int dp[n][3];
    dp[1][0] = a[0][0];
    dp[1][1] = a[0][1];
    dp[1][2] = a[0][2];

    for (int i = 2;i<=n;i++)
    {
        int mx = INT_MIN;
        for (int j = 0; j < 3;j++)
        {
            dp[i][j] =a[i-1][j]+
            max(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3]);
        }
    }

    cout << max(dp[n][0], max(dp[n][1], dp[n][2]));
    // solve(a, b, c, 0,0,n);
}
void multiple(){
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
  testcases{single();}
  }
int main()
{
IOS;
#ifndef ONLINE_JUDGE

freopen("./input.txt","r",stdin);
freopen("./output.txt","w",stdout);
freopen("./error.txt","w",stderr);
#endif
// multiple();
single();

}



