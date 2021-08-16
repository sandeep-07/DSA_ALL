#include<bits/stdc++.h>
using namespace std;
int odd_cycle=0;
void isBipartite(vector<int> g[],int node,unordered_map<int,int>& vis,int color){

    if(vis[node]!=-1)
    return;
    vis[node]=color;
    int nebColor=(color+1)%2;
    for(int nbr:g[node]){

        if(vis[nbr]==-1)
        {
            isBipartite(g,nbr,vis,nebColor);
        }else{
            if(vis[nbr]!=nebColor)
            {
                odd_cycle=1;
            };
        }
    }
    return ;
}
int main(){

    int v;
    cin>>v;
    vector<int> g[v+1];
    int edges;
    cin>>edges;
    for(int i=0;i<edges;i++){
        int from,to;
        cin>>from>>to;
        g[from].push_back(to);
        g[to].push_back(from);
    }
    
    unordered_map<int,int> vis;
    for(int i=0;i<v;i++)
    {
        vis[i]=-1;
    }
    isBipartite(g,0,vis,1);
    odd_cycle==0?cout<<"Bp":cout<<"not bp";
    return 0;
}
// 5 5
//     1 2
//     2 3
//     3 1
//     3 4
//     4 5

// 4 4
// 1 2
// 2 3
// 3 4
// 1 4