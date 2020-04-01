#include <bits/stdc++.h> 
using namespace std; 
#define NINF INT_MIN
int visit[10]={0};
void edge_add(vector<int> adj[],int u,int v)
{  
    // if(flag==0){
    //     adj[u].push_back(v);
    //     adj[v].push_back(u); 
    // }
    // else
    // {
       adj[u].push_back(v);
    // }
    
}

void get_graph(vector<int> adj[], int &v){

	cout<<"Enter number of vertices of graph\n";
	cin>>v;
	

	//flag = 0;
	int e;
	cout<<"Enter number of edges:\n";
	cin>>e;

	for(int i=0; i<e; i++){
		
		int u, v;
	
		printf("%d:Enter u, v: ", i);
		cin>>u>>v;
		edge_add(adj, u, v);
	}

}
void topologicalSortDFS(vector<int> adj[], int n, int u,stack<int> &Stack)
{  // cout<<"y"<<endl;
	visit[u] = 1;
	for(int i=0;i<adj[u].size();++i)
		if(visit[adj[u][i]] == 0)
			topologicalSortDFS(adj,n,adj[u][i],Stack);

	Stack.push(u);
}

void topologicalSort(vector<int> adj[], int n, stack<int> &Stack)
{  // cout<<"Y"<<endl;
	fill(visit,visit+n,0);
	for(int i=0;i<n;++i)
		if(visit[i] == 0)
			topologicalSortDFS(adj,n,i,Stack);
}


pair<int,int> LPATH_DAG_util(vector<int> adj[], int n, int s) 	// FOR DAG.
{
	stack<int> Stack;
	int dist[n];
	fill(dist,dist+n,NINF);	// initialize to Negative Infinity(MIN_INT)	
	dist[s] = 0;
	topologicalSort(adj,n,Stack);

	while(!Stack.empty())
	{   
		int u = Stack.top();
        
		Stack.pop();
        //cout<<Stack.top()<<endl;
		if(dist[u]!=NINF)
		{   
            for(int i=0;i<adj[u].size();i++)
            {
                if(dist[adj[u][i]]<dist[u]+1)
                dist[adj[u][i]]=dist[u]+1;
            }

		}
	}

	int max_v,max_d=0;
	for(int i=0;i<n;++i)
	{
		if(dist[i] != NINF && dist[i]>max_d)
		{
				max_d = dist[i];
				max_v = i;
		}
	}

	pair<int,int> max;
	max.first = max_v;
	max.second = max_d;

	return max;


}

void LPATH_DAG(vector<int> adj[], int n)
{   cout<<"lapth_dag: passing graph "<<n<<endl;
	int lpath =-1,u,v;
	for(int i=0;i<n;++i)
	{   //cout<<"x";
		pair<int,int> max;
		max = LPATH_DAG_util(adj,n,i);
        
		if(max.second>lpath)
		{
			u = i;
			lpath = max.second;
			v = max.first;
		}
	}

	cout << "Longest path in DAG id from "<<u<<" to "<<v<<" of length "<<lpath<<endl;
}


