// Initial Template for C++
// https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1#
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int n, vector<vector<int>> a)
    {
        // code here
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                // when on top layer no need to see for above
                if(i==0)
                dp[i][j]=a[i][j];
                
                // when on left most no need to see left
                // only see for top and top right
                else if(j==0)
                dp[i][j]=max(dp[i-1][j],dp[i-1][j+1])+a[i][j];
                
                
                // when on right most
                // only see top and top left
                else if(j==n-1)
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
                
                // when all possible
                else
                    dp[i][j]=a[i][j]+max(dp[i-1][j],max(dp[i-1][j+1],dp[i-1][j-1]));

            }
        
        }
        int mx=INT_MIN;
        for(int j=0;j<n;j++)
        mx=max(mx,dp[n-1][j]);
       
        return mx;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends