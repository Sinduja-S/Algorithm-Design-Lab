#include <iostream>
#include <algorithm>
#include <list>
#include<bits/stdc++.h>
using namespace std;

struct node{
int index;
node *left,*right;
};
void trav(node *root, int arr[], int &res);
node *create(int index){
node *temp=new node;
temp->left=temp->right=NULL;
temp->index=index;
return temp;
}

void func(int arr[], int n)
{
    list<node *> store;
    node *root=NULL;
    for(int i=0;i<n;i+=2)
    {
        node *temp1=create(i);
        node *temp2=NULL;
        if(i+1<n)
        {
            temp2=create(i+1);

            if(arr[i]<arr[i+1])
            {
                root=create(i);
            }
            else
            {
                root=create(i+1);
            }

            root->left=temp1;
            root->right=temp2;

            store.push_back(root);
        }
        else
        {
            store.push_back(temp1);
        }
    }

    int lsize=store.size();

    while(lsize!=1){
        int last=(lsize&1)?(lsize-2):(lsize-1);
        for(int i=0;i<last;i+=2)
        {
            node *f1=store.front();
            store.pop_front();

            node *f2=store.front();
            store.pop_front();

            root=(arr[f1->index]<arr[f2->index])?create(f1->index):create(f2->index);

            root->left=f1;
            root->right=f2;

            store.push_back(root);
        }
        if(lsize&1)
        {
            store.push_back(store.front());
            store.pop_front();
        }
        lsize=store.size();
    }

    int res=INT_MAX;
    trav(root,arr,res);

    cout<<"Minimum: "<<arr[root->index]<<endl<<"Second minimum: "<<res<<endl;
}

void trav(node *root, int arr[], int &res)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return;
    if(res>arr[root->left->index] && root->left->index != root->index)
    {
        res=arr[root->left->index];
        trav(root->right,arr,res);
    }
    else if(res > arr[root->right->index] && root->right->index != root->index)
    {
        res=arr[root->right->index];
        trav(root->left,arr,res);
    }
}

