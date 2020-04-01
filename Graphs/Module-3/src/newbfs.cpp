#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include"../include/hnewbfs.h" 
using namespace std;
// void addedge(vector <pair<int,int>> vert[],int v,int u,int w)
// {
// 	vert[u].push_back(make_pair(v,w));
// 	vert[v].push_back(make_pair(u,w));
// }
// int comptrip(const pair<int,int> &a, const pair<int,int> &b) 
// { 
//     return (a.first < b.first); 
// }
// void BFS_SPATH(vector <pair<int,int>> vert[],int v,int s,int flag=1)
// {
//      int qf=0,leng=0;
//      int visit[v]={0};
//      int root[v]={0};
//      int tree[v]={0};
//      for(int x=0;x<v;x++){
//          root[x]=-1;
//          tree[x]=-1;
//      }
//      vector <pair<int,int>> queue;
//      queue.push_back(make_pair(0,s));
//      while(!queue.empty()){
//          auto node=queue[0];
//          visit[node.second]=1;
//          tree[node.second]=node.first;
//          for(auto j=vert[node.second].begin();j!=vert[node.second].end();j++){
//              qf=0;
//              if(visit[j->first]==0){
//                 for(auto i=queue.begin();i!=queue.end();i++){
//                     if(j->first==i->second){
//                         root[j->first]=((node.first+j->second)<i->first)?node.second:root[j->first];
//                         i->first=((node.first+j->second)<i->first)?(node.first+j->second):i->first;
//                         qf=1;     
//                     }
//                 }
//                 if(qf==0){
//                     queue.push_back(make_pair((node.first+j->second),j->first));
//                     root[j->first]=node.second;
//                 }
//              }
//          }
//          leng=queue.size();
//          queue[0]=queue[leng-1];
//          queue.pop_back();
//          sort(queue.begin(),queue.end(),comptrip);
//      }
//      int r;
//      for(int y=0;y<v;y++){
//          if(y==s){
//              continue;
//          }
//          else{
//          cout<<"vertex "<<y;
//          r=root[y];
//          if(r==-1){
//             cout<<"disconnected";
//          }
//          else{
//             cout<<" in "<<tree[y];
//             while(r!=-1){
//                 cout<<" from "<<r;
//                 r=root[r];
//             }
//          }
//          cout<<endl;
//          }
//      }
// }

int main(){
	//vertext, weight
	int n;
	cout<<"Enter the number of vertices:"<<endl;
	cin>>n;
	vector <pair<int,int>> vert[n];
	addedge(vert,0,1,4);
    addedge(vert,0,7,8);
    addedge(vert,1,7,11);
    addedge(vert,2,1,8);
    addedge(vert,2,8,2);
    addedge(vert,8,6,6);
    addedge(vert,8,7,7);
    addedge(vert,7,6,1);
    addedge(vert,2,3,7);
    addedge(vert,2,5,4);
    addedge(vert,6,5,2);
    addedge(vert,3,5,14);
    addedge(vert,3,4,9);
    addedge(vert,4,5,10);
	BFS_SPATH(vert,n,0,1);
	return 0;	
}
