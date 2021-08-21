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

int ceil_N(vector<ll> a,ll m){
    ll n = a.size();
    ll l = 0, r = n,x=-1;
    while(l<=r){
        ll mid = l + (r - l) / 2;
        if(a[mid]==m)
            return a[mid];
        else if(a[mid]>m){
            x = a[mid];
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return a[l];
}
void  single()
{
    take(n);
    ai(a, n);
    take(m);
    cout << ceil_N(a, m);
}
int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("./input.txt","r",stdin);
freopen("./output.txt","w",stdout);
freopen("./error.txt","w",stderr);
#endif
ll t;
t = 1;
// cin>>t;
while(t--)
{
    single();
}
}



