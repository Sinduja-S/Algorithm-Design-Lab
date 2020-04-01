#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
void addedge(vector <pair<int,int>> vert[],int v,int u,int w);
int comptrip(const pair<int,int> &a, const pair<int,int> &b);
void BFS_SPATH(vector <pair<int,int>> vert[],int v,int s,int flag=1);