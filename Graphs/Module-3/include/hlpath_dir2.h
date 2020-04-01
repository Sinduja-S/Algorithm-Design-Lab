#include <bits/stdc++.h> 
using namespace std; 
pair<int,int> LPATH_DAG_util(vector<int> adj[], int n, int s);
void topologicalSort(vector<int> adj[], int n, stack<int> &Stack);
void topologicalSortDFS(vector<int> adj[], int n, int u,stack<int> &Stack);
void edge_add(vector<int> adj[],int u,int v);
void get_graph(vector<int> adj[], int &v);
void LPATH_DAG(vector<int> adj[], int n);