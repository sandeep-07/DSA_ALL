// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void floodfill(vector<vector<int>>& maze,
    int  row,int col,
    string psf,
    vector<vector<int>>& vis,vector<string>& ans) {
    
    // cout<<row<<" "<<col<<endl;
    if(row==maze.size()||row<0
    ||col==maze[0].size()||col<0
    ||maze[row][col]==0||vis[row][col]==1)
    return;
    // cout<<"s"<<" "<<"a"<<endl;
    if(row==maze.size()-1&&col==maze[0].size()-1)
    {
        ans.push_back(psf);
        return;
    }
    // cout<<"n"<<" "<<"d"<<endl;
    
    vis[row][col]=1;
    floodfill(maze,row-1,col,psf+"U",vis,ans);
    floodfill(maze,row+1,col,psf+"D",vis,ans);
    floodfill(maze,row,col-1,psf+"L",vis,ans);
    floodfill(maze,row,col+1,psf+"R",vis,ans);
    vis[row][col]=0;
}
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>> vis(n,vector<int>(n,0));
        vector<string> ans;
        floodfill(m,0,0,"",vis,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends