#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> graph[200000];
vector<ll> dp(200000,-1);
ll solve(ll src){
    if(dp[src]!=-1)
        return dp[src];
    ll path = 0;
    for(ll nbr:graph[src])
    {
        path = max(path, solve(nbr) + 1);
    }
    dp[src] = path;
    return path;
}
void single(){
    ll ver, edges;
    cin >> ver >> edges;

    while(edges--){
        ll from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }
    ll ans = -1;
    for(ll i=1;i<=ver;i++)
    ans=max(ans,solve(i));
    cout << ans;

    // for(ll x:dp)
    //     cout << x << endl;
}
int main(){
    #ifndef ONLINE_JUDGE

    freopen("./input.txt","r",stdin);
    freopen("./output.txt","w",stdout);
    freopen("./error.txt","w",stderr);
    #endif

    single();
}