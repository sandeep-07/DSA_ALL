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
    void bfsShortestDist(T src)
    {
        map<T,int> dist;
        for(auto x:l)
        {
            auto node=x.first;
            dist[node]=INT_MAX;
        }
        queue<T> q;
        q.push(src);
        dist[src]=0;

        while(!q.empty()){
            T node=q.front();
            cout<<node<<" ";
            q.pop();

            for(auto nbr:l[node])
            {
                if(dist[nbr]==INT_MAX)
                {
                    q.push(nbr);
                    dist[nbr]=dist[node]+1;
                }
            }
        }
        
        for(auto node:l){
            cout<<"Node "<<node.first<<" is at dist of "<<dist[node.first]<<endl;
        }
    }

};

int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(2,3);
    g.addEdge(1,2);
    g.addEdge(3,4);
    g.addEdge(5,4);

    g.bfsShortestDist(0);
    
    return 0;
}