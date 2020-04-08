#include<bits/stdc++.h>
using namespace std;

struct edge{
    int u,v,wt;
};

void edge_add(vector<pair<int,int> > adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt)); 
    adj[v].push_back(make_pair(u, wt)); 
}

int * dijkstra(vector<pair<int,int>> adj[], int n, int src)//from given src to every other point
{
    set<pair<int,int>> setdist;

   static int dist[100];
    for(int i=0;i<n;i++)
    dist[i]=INT_MAX;

    setdist.insert(make_pair(0,src));

    dist[src]=0;

    while(!setdist.empty())
    {
        pair<int,int> temp= *(setdist.begin());
        setdist.erase(setdist.begin());

        int u=temp.second;

        for(auto i=adj[u].begin();i!=adj[u].end();i++)
        {
            int v=i->first;
            int weight=i->second;

            if(dist[v]>dist[u]+weight)
            {
                if(dist[v]!=INT_MAX)
                setdist.erase(setdist.find(make_pair(dist[v], v)));

                dist[v]=dist[u]+weight;
                setdist.insert(make_pair(dist[v],v));
            }
        }
    }

    return dist;
}

void get_graph(vector<pair<int,int> > adj[], int &n)
{
    cout<<"Enter no of vertices: "<<endl;
    cin>>n;
    int u,v,w,m;
    cout<<"Enter no of edges: "<<endl;
    cin>>m;
    cout<<"Enter edges(src,dest,weight separated by spaces): ";
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        edge_add(adj,u,v,w);
    }

}

void apsp(vector<pair<int,int>> adj[], int n)
{   
    int apsp[n][n];
    int *temp;
    
    for(int i=0;i<n;i++)
    {
        temp=dijkstra(adj,n,i);

        for(int j=0;j<n;j++)
        {
            apsp[i][j]=*(temp+j);
            
        }
    }

    for(int i=0;i<n;i++)
       { 
         cout<<"VERTEX "<<i<<endl;
         for(int j=0;j<n;j++)
         {
             cout<<"from Vertex "<<j<<": "<<apsp[i][j]<<endl;
         }
         

         cout<<endl;
       }
}

int main()
{
    vector<pair<int,int> > adj[100];
    int n;
    get_graph(adj,n);
    apsp(adj,n);

}