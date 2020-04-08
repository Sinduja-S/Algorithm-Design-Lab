#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Number of nodes: ";
  cin >> n;
  int A[n][n],S[n][n];
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
    if(i!=j)
    A[i][j]=S[i][j]=INT_MAX;
    else
    A[i][j]=S[i][j]=0;
   }
 }

 
  int c;
  cout << endl << "Do you wish to enter an edge?(0/1): ";
  cin >> c;
  while(c!=0)
  {
    int a,b,w;
    cout << endl << "Enter the pair and its weight: ";
    cin >> a >> b >> w;
    A[a][b]=S[a][b]=w;
  //  A[b][a]=S[b][a]=w;
    cout << endl << "Do you wish to enter an edge?(0/1): ";
    cin >> c;
  }

  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
       cout << A[i][j] << " ";
   }
   cout << endl;
  }  

  for(int k=0;k<n;k++)//Intermediate vertex
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(S[i][j]>S[i][k]+S[k][j] && S[i][k]!=INT_MAX && S[k][j]!=INT_MAX && i!=j)
          S[i][j]=S[i][k]+S[k][j];
      }
    }
  }
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {    
       if(S[i][j]!=INT_MAX)
       cout << S[i][j] << " ";
       else 
       cout<<"X ";
   }
   cout << endl;
  }  
}