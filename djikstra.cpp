// #include<bits/stdc++.h>
// using namespace std;

// class Graph{
//     int V;
//     list<pair<int, int>> *l;

// public:
//     Graph(int v)
//     {
//         this->V=v;
//         l = new list<pair<int,int> >[V];
//     }
//     void addEdge(int u,int v,int wt,bool undir=true){

//         l[u].push_back({wt, v});
//         if(undir){
//             l[v].push_back({wt, u});
//         }
//     }
//     void dijikstra(int src,int dest){
//         vector<int> dist(V,INT_MAX);
//         set<pair<int,int>> s;
//         dist[src] = 0;
//         s.insert({0, src});
        
//         while(!s.empty()){
//             auto it = s.begin();
//             auto node = it->second;
//             int distTillNow = it->first;
//             // cout << node << " " << distTillNow << endl;
//             s.erase(it);

//             for (auto nbrPair:l[node]){

//                 int nbr = nbrPair.second;
//                 int edgeLen=nbrPair.first;
//                 // cout << nbr<<" " << edgeLen<<endl;
//                 if(distTillNow+edgeLen<dist[nbr]){

//                     auto f = s.find({dist[nbr], nbr});
//                     if(f!=s.end())
//                     {
//                         s.erase(f);
//                     }
//                     dist[nbr] = distTillNow + edgeLen;
//                     s.insert({dist[nbr],nbr});
//                 }

//             }
//         }

//         for(int i=0;i<V;i++)
//             cout << "Node " << i << " dist " << dist[i] << endl;
//     }
//     void printGraph(){
//         for(int i=0;i<V;i++){
//             cout << i << "-->";
//             for(auto pairs:l[i])
//             {
//                 cout << pairs.first << "," << pairs.second<<" ";
//             }
//             cout << endl;
//         }
        
//     }
// };
// int main(){
//     Graph g(5);
//     g.addEdge(0, 1, 2);
//     g.addEdge(1, 2, 2);
//     g.addEdge(0, 2, 4);
//     g.addEdge(3, 2, 2);
//     g.addEdge(3, 4, 1);
//     // g.printGraph();
//     g.dijikstra(0, 4);
// }
#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>> *l;
public:
    Graph(int V){
        this->V=V;
        l = new list<pair<int, int>> [V];
    }

    void addEdge(int src,int wt,int dst){
        l[src].push_back({wt, dst});
        l[dst].push_back({wt, src});
    }

    void printGraph(){

        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            for (auto nbrPair:l[i])
            {
                int wt = nbrPair.first;
                int dst = nbrPair.second;
                cout << wt << "," << dst<<" ";
            }
            cout << endl;
        }
    }

    void djikstra(){

        vector<int> dist(V, INT_MAX);

        set<pair<int,int>> st;
        dist[0] = 0;

        st.insert({0, 0});
        
        while(!st.empty()){

            auto it = st.begin();
            int distTillNow = it->first;
            int node = it->second;

            st.erase(it);

            for(auto nbrPair:l[node]){

                int wt = nbrPair.first;
                int nbrnode = nbrPair.second;

                if(distTillNow+wt<dist[nbrnode])
                {
                    auto f = st.find({dist[nbrnode], nbrnode});
                    if(f!=st.end())
                        st.erase(f);

                    dist[nbrnode] = distTillNow + wt;
                    st.insert({dist[nbrnode],nbrnode});
                }
            }
        }
        for(int i=0;i<V;i++)
            cout << "Node " << i << " dist " << dist[i] << endl;
    
    }
};

int main(){

    Graph g(5);
    g.addEdge(0, 1, 2);
    g.addEdge(1, 2, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(3, 2, 2);
    g.addEdge(3, 4, 1);
    // g.printGraph();
    g.djikstra();
}