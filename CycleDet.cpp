#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V)
    {
        this->V=V;
        l=new list<int>[V];
    }
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    // void cycle_det(){
    //     bool *visited=new bool[V];
    //     for(auto x:l)
    //     visited[x.first]=false;
    // }

    void  printAdjList(){

        for(int i=0;i<V;i++)
        {
            cout<<"Vertex "<<i<<"-->";
            for(int nbr:l[i])
            cout<<nbr<<",";
            cout<<endl;
        }
    }

    bool cycledetec_helper(int node,int par,bool vis[])
    {
        vis[node]=true;
        for(auto nbr:node)
        {
            if(vis[nbr]==false)
            {
                vis[nbr]=true;
                return cycledetec_helper(nbr,node,vis);
            }

        }
    }
    void cycleDetec(){
        bool vis=new bool[V] ;
        for(int i=0;i<V;i++)
        vis[i]=false;

        return cycledetec_helper(0,0,vis);
    }

    
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(2,1);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);
    
    // g.printAdjList();
    g.x();

    
    return 0;
}