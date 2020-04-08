#include<bits/stdc++.h>
using namespace std;
void edge_add(vector<int>adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void get_graph(vector<int> adj[], int &n)
{
    cin>>n;
    int u,v;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        edge_add(adj,u,v);
    }

}

void DPMis(vector<int> adj[],int x,int y,set<int> &S)
{
  set<int> S1;//Node+grandchildren
  set<int> S2;//Children
  int k=0;
  for(int i=0;i<adj[x].size();i++)
   if(adj[x][i]!=y)
    k++;
  if(k==0)
  {
   cout << x << " " << y  << " a "<< endl;
   S.insert(x);
  for(auto it =S.begin();it!=S.end();it++)
   cout<<*it<< " ";
   cout << " w" << endl;
  }
  else
  {
    for(int i=0;i<adj[x].size();i++)
     if(adj[x][i]!=y)
      DPMis(adj,adj[x][i],x,S);
      S2=S;
      S.clear();
    for(int i=0;i<adj[x].size();i++)
    {
      if(adj[x][i]!=y)
      {
       for(int j=0;j<adj[adj[x][i]].size();j++)
       {
        if(adj[adj[x][i]][j]!=x) 
        DPMis(adj,adj[adj[x][i]][j],adj[x][i],S);
        S1=S;
       }
      }
    }
    S.clear();
    S1.insert(x);
 for(auto it =S2.begin();it!=S2.end();it++)
   cout<<*it<< " ";
    cout << " b" <<endl;
  for(auto it =S1.begin();it!=S1.end();it++)
   cout<<*it<< " ";
   cout << " c" << endl;
    
    if(S1.size()>S2.size())
      S=S1;
    else
      S=S2;
      
  for(auto it =S.begin();it!=S.end();it++)
   cout<<*it<< " ";
   cout << " d" << endl;
    
  }
}

int main()
{
  set<int> M;
  int n;
  vector<int> adj[100];
  get_graph(adj,n);
  DPMis(adj,0,0,M);
  for(auto it =M.begin();it!=M.end();it++)
    cout<<*it<< " ";
}