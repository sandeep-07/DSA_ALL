// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int dp[n][3];
    
    int day[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++)
        cin>>day[i][j];
    }
    
    for(int i=0;i<3;i++)
    dp[0][i]=day[0][i];
    
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            dp[i][j]=day[i][j]+min(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3]);
        }
    }
    // for(auto x:dp)
    
    cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
    
}