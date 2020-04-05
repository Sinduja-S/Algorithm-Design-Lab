#include<bits/stdc++.h>
using namespace std;
void edge_add(vector<int>adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void get_graph(vector<int> adj[], int &n)
{
    cout<<"Enter no of vertices: "<<endl;
    cin>>n;
    int u,v,m;
    cout<<"Enter no of edges: "<<endl;
    cin>>m;
    cout<<"Enter edges(src,dest separated by spaces): ";
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        edge_add(adj,u,v);
    }

}

int get_degree(vector<int> adj[], int n, int u)
{
    return adj[u].size();
}

void greedymis(vector<int> adj[], int n)
{
    set<pair<int, int>> deg;
    pair<int,int>p;
    for(int i=0;i<n;i++)
    {
        deg.insert( make_pair(get_degree(adj,n,i),i) );
    }

    // cout<<"Degree sequence"<<endl;
    // for (auto const &x : deg)
    // cout<<x.first<<" "<<x.second<<endl;

    set<int> mis;
    int v;
    while(!deg.empty())
    {
        p=*(deg.begin());
        v=p.second;

        mis.insert(v);//insert min degree node in mis
        deg.erase(deg.begin());

        for(auto it=adj[v].begin();it!=adj[v].end();it++)//erase neighbours of v
        {   
            for(auto i=deg.begin();i!=deg.end();i++)
            {   
                if(i->second==*it)
                deg.erase(*i);
            }
            
        }
}
    
    
    cout<<endl<<"Maximum Independent Set"<<endl;
    for(auto it =mis.begin();it!=mis.end();it++)
    cout<<*it<<" ";


}
int main()
{
    int n;
    vector<int> adj[100];
    get_graph(adj,n);
    greedymis(adj,n);

}