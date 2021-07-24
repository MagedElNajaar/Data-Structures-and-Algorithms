#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector < int > adj[(int)1e5 + 6];
bool vis[(int)1e5 + 6];
stack<int>TOPO;

void topoSort(int node){
    vis[node] = 1;
    for(int i=0;i<adj[node].size();i++){
        int v = adj[node][i];
        if(!vis[v]){
            topoSort(v);
        }
    }
    TOPO.push(node);
}

int main() {
    memset(vis, 0, sizeof(vis));
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int from,to;
        cin>>from>>to;
        adj[from].push_back(to);
    }
    for(int i=0;i<nodes;i++){
        if(!vis[i]){
            topoSort(i);
        }
    }
    while(!TOPO.empty()){
        cout << TOPO.top() << endl;
        TOPO.pop();
    }
    
    return 0;
}
