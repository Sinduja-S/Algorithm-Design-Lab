#include <bits/stdc++.h> 
using namespace std;
struct lpath{
    int src,dest,length;
};
void edge_add(vector<int>adj[],int u,int v);
void print(vector<int>& path);
int isnotvisited(int x, vector<int>& path);
void findpath(vector<int> adj[], int v, int src, int dest, int length);
pair<int,int> initbfs(vector<int> adj[],int v, int start);
struct lpath LPATH(vector<int> adj[],int v);
