// https://atcoder.jp/contests/dp/tasks/dp_d
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
// #define reverse(a) reverse(all(a))
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
 
string getLCS(string s,string t,int len,vector<vector<int>>& dp)
{
  int stx = s.size();
  int sty = t.size();
  string ans = "";
  while(stx>0&&sty>0)
  {
    if(s[stx-1]==t[sty-1])
    {
      ans.push_back(s[stx - 1]);
      stx--;
      sty--;
    }
    else{
      dp[stx - 1][sty] > dp[stx][sty - 1] ? stx-- : sty--;
    }
  }

  return ans;
}
void  single()
{
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, -1));

    for(int i=0;i<=s.size();i++){
      for (int j = 0; j <=t.size();j++)
      {
        if(i==0 or j==0)
        {
          dp[i][j] = 0;
          continue;
        }
        else if(s[i-1]==t[j-1])
        {
          int xx = dp[i - 1][j - 1];
          dp[i][j] = xx+1;
        } 
        else
        {
          int x = dp[i-1][j];
          int y = dp[i][j-1];
          dp[i][j]=x>y ? x : y;
        }
      }
    }
    int len= dp[s.size()][t.size()];
    string anns=getLCS(s,t,len,dp);
    reverse(anns.begin(),anns.end());
    cout << anns;

    // cerr << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
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
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

single();

}



