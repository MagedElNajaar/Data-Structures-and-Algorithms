#include <iostream>
using namespace std;
int adj[100][100];
int V,E;

void addEdge(int u,int v){ //Unweighted
    adj[u][v] = 1;
    //adj[v][u] = 1; //UnDirected
}

void addEdge(int u,int v,int w){ //Weighted
    adj[u][v] = w;
    //adj[v][u] =  w; //UnDirected
} 

int main() {
  cin>>V>>E;
  for(int i=0;i<E;i++){
    int u,v;
    cin>>u>>v;
    addEdge(u,v);
  }
}
