#include <bits/stdc++.h>
using namespace std;

vector < int > adj[100];
int V,E;
void addEdge(int u,int v){ 
  adj[u].push_back(v);
  //adj[v].push_back(u); //UnDirected
}

int main() {
  cin>>V>>E;
  for(int i=0;i<E;i++){
    int u,v;
    cin>>u>>v;
    addEdge(u,v);
  }
  return 0;
}
