#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int src,int dst){
        l[src].push_back(dst);
        // l[dst].push_back({wt, src});
    }

    void printGraph(){
        for(int i=0;i<V;i++){
            cout << i << "-->";
            for(auto node:l[i])
            {
                cout <<node << ", ";
            }
            cout << endl;
        }
    }

    void dfs_helper(int node,vector<bool>& vis,list<int>& order){
        vis[node] = true;

        for(auto nbr:l[node])
        {
            if(!vis[nbr])
                dfs_helper(nbr, vis, order);
        } 
        order.push_front(node);
    }

    void topo(){
        vector<bool> vis(V,false);
        list<int> order;

        for (int i = 0; i < V;i++)
        if(!vis[i])
            dfs_helper(i, vis, order);

        for(auto x:order)
            cout << x << " ";
    }

    
};

int main(){
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.printGraph();
    g.topo();
    //g.dijikstra(0, 4);

    return 0;
}