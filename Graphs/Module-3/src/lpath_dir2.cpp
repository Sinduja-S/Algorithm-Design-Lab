#include <bits/stdc++.h> 
using namespace std; 
#include"../include/hlpath_dir2.h"

// pair<int,int> LPATH_DAG_util(vector<int> adj[], int n, int s);
// void topologicalSort(vector<int> adj[], int n, stack<int> &Stack);
// void topologicalSortDFS(vector<int> adj[], int n, int u,stack<int> &Stack);


int main()
{
    vector<int> adj[10];
    int n;
    
   // bool flag;
    get_graph(adj,n);
    cout<<"x";
    LPATH_DAG(adj,n);
}