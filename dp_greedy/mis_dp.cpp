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

void DPMis(vector<int> adj[],int x,int y,set<int> &S,set<int> DP[])
{
  set<int> S1;//Node+grandchildren
  set<int> S2;//Children
  int k=0;
  for(int i=0;i<adj[x].size();i++)
   if(adj[x][i]!=y)
    k++;
  if(k==0)
  {
   if(DP[x].empty())
   {
    S.insert(x);
    DP[x]=S;
   }
   else
   {
    //cout << S.size() << endl;
    //S.clear();
    S=DP[x];
   }
  
  }
  else
  {
    for(int i=0;i<adj[x].size();i++)
    {
     if(adj[x][i]!=y)
      if(DP[adj[x][i]].empty())
       DPMis(adj,adj[x][i],x,S,DP);
      else
      {
        //cout << S.size() << endl;
      //  S.clear();
        S=DP[adj[x][i]];
      }
    }
      S2=S;
      S.clear();
    for(int i=0;i<adj[x].size();i++)
    {
      if(adj[x][i]!=y)
      {
       for(int j=0;j<adj[adj[x][i]].size();j++)
       {
        if(adj[adj[x][i]][j]!=x) 
         if(DP[adj[adj[x][i]][j]].empty())
           DPMis(adj,adj[adj[x][i]][j],adj[x][i],S,DP);
         else
         {
           //cout << S.size() << endl;
           //S.clear();
           S=DP[adj[x][i]];
         } 
       }
      }
    }
    S1=S;
    S.clear();
    S1.insert(x);
    
    if(S1.size()>S2.size())
      S=S1;
    else
      S=S2;
    
  }
}

int main()
{
  set<int> M;
  int n;
  vector<int> adj[100];
  set<int> DP[n];
  get_graph(adj,n);
  DPMis(adj,0,0,M,DP);
  for(auto it =M.begin();it!=M.end();it++)
    cout<<*it<< " ";
}