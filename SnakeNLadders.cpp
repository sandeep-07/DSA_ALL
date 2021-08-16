#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;
    map<T,T> parent;
    public:
    void addEdge(int x,int y){
        l[x].push_back(y);
        // l[y].push_back(x);
    }
    void bfs(T src,T dest)
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
        parent[src]=src;

        while(!q.empty()){
            T node=q.front();
            //cout<<node<<" ";
            q.pop();

            for(auto nbr:l[node])
            {
                if(dist[nbr]==INT_MAX)
                {
                    q.push(nbr);
                    dist[nbr]=dist[node]+1;
                    parent[nbr]=node;
                }
            }
        }
        
        cout<<dist[dest];
        cout<<"\n";
        T temp=dest;
        while(temp!=src){
            cout<<temp<<"<--";
            temp=parent[temp];
        }
        cout<<src<<endl;
    }
};

int main(){
    int board[50]={0};
    // Snakes //Ladders
    board[2]=13;
    board[5]=2;
    board[9]=28;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=10;
    board[32]=-2;
    board[34]=-22;

    Graph<int> g;
    
    for(int i=0;i<=36;i++){
        for(int dice=1;dice<=6;dice++){
            int j=i+dice;
            j+=board[j];

            if(j<=36)
            g.addEdge(i,j);

        }
    }
    g.addEdge(36,36);
    g.bfs(0,36);
    return 0;
}