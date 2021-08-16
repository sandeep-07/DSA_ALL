// LIVE AND LET OTHERS LIVE.
// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1#:~:text=Way%201%3A%20Climb%202%20stairs,2%20stairs%20then%201%20stair.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>
vector<int> dp(100010,-1);
 int countWays(int n)
    {
        // your code here
        long long mod=1000000000+7;
        if(n==0)
        return 1;
        else if(n<0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        int secLast=countWays(n-1)%mod;//n-1 +1
        int thirdLast=countWays(n-2)%mod;//n-2 +2;
        
        
        return dp[n]=(secLast%mod+thirdLast%mod)%mod;
        
    }
void solve(){
    int n;
    cin>>n;
    cout<<countWays(n);
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



