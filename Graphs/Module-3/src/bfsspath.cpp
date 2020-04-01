#include<bits/stdc++.h>
using namespace std;
#include"../include/hbfsspath.h"

int main()
{
  int v;
  cout<<"enter number of vertices ";
  cin>>v;
  int visit[v]={0};
  
  vector<int> adj[v];
  edge_add(adj,1,2);
  edge_add(adj,2,3);
  edge_add(adj,3,4);
  edge_add(adj,5,4);
  edge_add(adj,5,6);
  edge_add(adj,1,6);
//   edge_add(adj,2,3);

BFS_SPath(adj,v,1);
return 0;
}