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

    void dfs(){
        map<T,bool> visited;
        // mark all the nodes as not visited in the beginning
        for(auto p:l){
            T node=p.first;
            visited[node]=false;
        }

        // Iterate over all the vertices and init
        // a dfs call
        int cnt=0;

        for(auto x:l)
        {
            auto node=x.first;
            if(!visited[node]){

                cout<<"Component "<<cnt<<"===>";
                dfs_helper(node,visited);
                cout<<endl;
                cnt++;
            }
        }
    }
};

int main(){
    Graph<int> g;
    g.addEdge(0,4);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,2);
    g.addEdge(5,6);
    g.addEdge(7,6);
    g.addEdge(8,8);


    g.dfs();
    
    return 0;
}