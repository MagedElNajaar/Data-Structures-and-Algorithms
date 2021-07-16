#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10]; //Adjacency List
bool vis[6];
int V,E;

void addEdge(int u,int v){ //Graph must be unwatied 
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void BFS(int u){
  queue < pair < int,int > > Que;
  Que.push(make_pair(u,0));
  vis[u] = 1;
  while(!Que.empty()){
   
    int u = Que.front().first;
    int c = Que.front().second;
    Que.pop();
     cout << u << " " << c << endl;
    for(int i = 0;i < adj[u].size();i++){
      int v = adj[u][i];
      if(!vis[v]){
        vis[v] = 1;
        Que.push(make_pair(v,c+1));
      }
    }
  }
}

int main() {
  cin>>V>>E;
  for(int i=0;i<E;i++){
    int u,v;
    cin>>u>>v;
    addEdge(u,v);
  }
  BFS(1);
}
