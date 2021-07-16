#include <bits/stdc++.h>
using namespace std;

vector < pair < int,int > > adj[100];
int V,E;

void addEdge(int u,int v,int w){
  adj[u].push_back(make_pair(v,w));
  //adj[v].push_back(make_pair(u,w)); //UnDirected
}

int main() {
  cin>>V>>E;
  for(int i=0;i<E;i++){
    int u,v,w;
    cin>>u>>v>>w;
    addEdge(u,v,w);
  }
  return 0;
}
