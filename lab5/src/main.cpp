#include<iostream>
#include"../include/kpointer.h"
#include"../include/merge.h"
#include"../include/heap.h"
#include"../include/bst.h"
#include"../include/dckarray.h"
#include"../include/unionmerge.h"
#include"../include/input.h"
using namespace std;

int main(){
    int ch=0;
    cout<<"Enter"<<endl<<"1 for K-array sort using heap"<<endl<<"2 for K-array sort using bst"<<endl<<"3 for K-array sort using divide and conquer"<<endl<<"4 for K-array sort using k pointers"<<endl<<"5 for K-array sort using union"<<endl<<"6 for merge plus insert";
    cin>>ch;
    if(ch==1){
        heapsort();
    }
    else if(ch==2)
    {
        bstsort();
    }
    else if(ch==3)
    {
        dcsort();
    }   
    else if(ch==4)
    {
        kpointsort();
    }
    else if(ch==5)
    {
        unionsort();
    }
    else if(ch==6)
    {
        mergeplusinsert();
    }

}