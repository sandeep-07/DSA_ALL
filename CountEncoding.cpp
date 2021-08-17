// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-encodings-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    int n=s.size();
    int dp[s.size()+1]={0};
    dp[0]=1;
    dp[1]=1;
    
    for(int i=2;i<=n;i++){
        // using single one
        if(s[i-1]!='0')
        dp[i]+=dp[i-1];
        // i-1 and i th string ->number
        if(s[i-2]!='0')
        {int num=stoi(s.substr(i-2,2));
        
        if(num<=26)
        {
            // cout<<i<<" "<<num<<endl;
            dp[i]+=dp[i-2];
        }}
    }
    // for(auto x:dp)
    // cout<<x<<" ";
    // cout<<endl;
    cout<<dp[s.size()];
}