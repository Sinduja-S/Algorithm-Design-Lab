#include<bits/stdc++.h>

#include"../include/hlpath_undir.h"
using namespace std;

int main()
{
  int v;
  cout<<"enter number of vertices ";
  cin>>v;
  //int visit[v]={0};
  vector<int>adj[v];
 // adj.resize(v);
  edge_add(adj,0,3);
  edge_add(adj,3,2);
  edge_add(adj,3,1);
  edge_add(adj,1,4);
  edge_add(adj,5,4);
  edge_add(adj,4,6);
  edge_add(adj,0,7);
  edge_add(adj,0,8);
  edge_add(adj,8,9);
  
  struct lpath s=LPATH(adj,v);
  cout<<endl<<s.src<<" "<<s.dest<<" "<<s.length<<endl;
//  cout<<s.length<<endl;
  //findpath(adj,v,s.src,s.dest,s.length);   //for printing actual path
return 0;
}