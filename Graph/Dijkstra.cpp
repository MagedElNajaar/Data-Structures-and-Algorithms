#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

const int N = 1e6 + 10;

int nodes,edges;
vector < pair < int, int > > adj[N];
int dis[N];


void addBiEdge(int &f,int &t,int &c){
    adj[f].push_back(make_pair(t, c));
    adj[t].push_back(make_pair(f, c));
}


void Dijkstra(int src){
    dis[src] = 0;
    priority_queue< pair < int, int > > pq;
    pq.push(make_pair(0,src));
    
    while(pq.size()){
        int u, src_cost;
        u = pq.top().second;
        src_cost = -pq.top().first;
        pq.pop();
        
        if(src_cost != dis[u]) continue;
        
        for(auto Edge : adj[u]){
            int v = Edge.first;
            int Cst_Edge = Edge.second;
            
            if(dis[v] > src_cost + Cst_Edge){
                dis[v] = src_cost + Cst_Edge;
                pq.push(make_pair(-dis[v], v));
            }
        }
    }
}

int main(){
    cin >> nodes >> edges;
    memset(dis, 0x3f, sizeof (dis[0])*nodes);
    
    while(edges--){
        int from, to, cost;
        cin >> from >> to >> cost;
        from--; to--;
        addBiEdge(from, to, cost);
    }
    
    Dijkstra(0);
    cout << dis[2] << endl;
}


