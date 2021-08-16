//https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1#
// LIVE AND LET OTHERS LIVE.

#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>
vector<int> dp(100010,-1);
 int countPairings(int n)
    {
        // your code here
        long long mod=1000000000+7;
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else if(n==2)
        return 2;
        if(dp[n]!=-1)
        return dp[n];

        return dp[n]=(countPairings(n-1)%mod+((n-1)%mod)*(countPairings(n-2)%mod))%mod;
        
    }
void solve(){
    int n;
    cin>>n;
    cout<<countPairings(n);
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



