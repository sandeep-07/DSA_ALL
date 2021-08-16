#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;
    public:
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfs_helper(T src,map<T,bool>& visited){

        cout<<src<<" ";
        visited[src]=true;
        // go to all nbrs of that node
        for(T nbr:l[src]){
            if(!visited[nbr]){
                // visited[nbr]=true;
                dfs_helper(nbr,visited);
            }
            // dfs_helper(src,visited);
        }
    }

    void dfs(T src){
        map<T,bool> visited;
        // mark all the nodes as not visited in the beginning
        for(auto p:l){
            T node=p.first;
            visited[node]=false;
        }
        dfs_helper(src,visited);
    }

    bool cycle_helper(int node,bool vis[],int par){
        // if(vis[node])
        //     return true;
        vis[node] = true;

        for(int x:l[node])
        {
            if(!vis[x])
            {
                return cycle_helper(x,vis,node);
            }
            else{
                if(x!=par)
                    return true;
            }
                
        }
        return false;
    }
    bool contains_cycle(){
        int V = l.size();
        bool visited[V];

        for (int i = 0; i < V;i++){
            visited[i] = false;
        }

        return cycle_helper(0, visited,-1);
    }
};

int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,0);

    cout << g.contains_cycle();

    return 0;
}