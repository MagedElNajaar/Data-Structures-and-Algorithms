#include <bits/stdc++.h>
using namespace std;
//vector < vector < int > > adj;
vector <int> adj[6]; //Adjacency List
bool vis[6];
int V,E;

void addEdge(int u,int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void DFS(int u){
  vis[u] = 1;
  cout << u << "\n";
  for(int i=0;i<adj[u].size();i++){
    int v = adj[u][i];
    if(!vis[v])
      DFS(v);
  }
}

void DFS_Stack(int u){
  stack<int>s;
  vis[u] = 1;
  s.push(u);
  
   while(!s.empty()){
     int u = s.top();
     cout << u << "\n";
     s.pop();
     for(int i=0;i<adj[u].size();i++){
       int v = adj[u][i];
       if(!vis[v]){
        vis[v] = 1;
        s.push(v);
       }
     }
   }
}

int main(){
  cin>>V>>E;
  //adj.clear();
  //adj.resize(E);
  for(int i=0;i<E;i++){
    int u,v;
    cin>>u>>v;
    addEdge(u,v);
  }
  memset(vis,0,sizeof(vis));
  DFS(0); //or DFS_Stack(0);

}
