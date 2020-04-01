#include<bits/stdc++.h>
using namespace std;
void edge_add(vector<int>adj[],int u,int v)
{  adj[u].push_back(v);
   adj[v].push_back(u);      //undirected and unweighted graph    
}
struct lpath{
    int src,dest,length;
};
void print(vector<int>& path)
{
    for(int i=0;i<path.size();i++)
    {
        cout<<path[i]<<"-";
    }
    cout<<endl;
}

int isnotvisited(int x, vector<int>& path)
{
    for(int i=0;i<path.size();i++)
    {
        if(path[i]==x)
        return 0;
    }
    return 1;
}

void findpath(vector<int> adj[], int v, int src, int dest, int length)
{
    queue<vector<int> > q; 
    vector<int> path; 
    path.push_back(src); 
    q.push(path); 
    while (!q.empty()) { 
        path = q.front(); 
        q.pop(); 
        int last = path[path.size() - 1]; 
  
        if (last == dest && path.size()-1==length)  
            print(path);         
  
        for (int i = 0; i < adj[last].size(); i++) { 
            if (isnotvisited(adj[last][i], path)) { 
                vector<int> newpath(path); 
                newpath.push_back(adj[last][i]); 
                q.push(newpath); 
            } 
        } 
    } 
}

pair<int,int> initbfs(vector<int> adj[],int v, int start)
{
    int dis[v];
    memset(dis,-1,sizeof(dis));
    queue<int> q;
    q.push(start);

    dis[start]=0;
    while(!q.empty())
    {
        int t=q.front(); q.pop();

        for(int i=0;i<adj[t].size();i++)
        {
            int s=adj[t][i];
            if(dis[s]==-1)
            {
                q.push(s);
                dis[s]=dis[t]+1;
            }
        }

    }

    int maxdis=0;
    int nodeidx;
    for(int i=0;i<v;i++)
    {
        if(dis[i]>maxdis)
        {
            maxdis=dis[i];
            nodeidx=i;
        }
    }
    return make_pair(nodeidx,maxdis);
}
struct lpath LPATH(vector<int> adj[],int v)
{
    pair<int,int>t1,t2;
    struct lpath s;
    t1=initbfs(adj,v,0);
    t2=initbfs(adj,v,t1.first);
    s.src=t1.first;
    s.dest=t2.first;
    s.length=t2.second;
    cout << "Longest path is from " << t1.first << " to "
        << t2.first << " of length " ;
cout<<t2.second<<endl;
    return s;
}

