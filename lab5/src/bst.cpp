#include <iostream>
#include"../include/input.h"

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

};


struct node *insertbst(struct node *root, int x)
{   node *temp=new node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
    root=temp;
    return root;}

  if (x<root->data)
    root->left=insertbst(root->left,x);
  else
    root->right=insertbst(root->right,x);

}

struct node *inorder(struct node *root)
{   if(root!=NULL)
{
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

}

void L3(int *a,int x, int y)
{   node *root=NULL;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
    {
        root=insertbst(root,*(a+i*y+j));
    }}
    inorder(root);
}

void bstsort()
{
    int k,n;
    cout<<"Enter k n"<<endl;
    cin>>k>>n;
    int a[k][n];
    getarray((int *)a,n,k);
    L3((int *) a,k,n);
}