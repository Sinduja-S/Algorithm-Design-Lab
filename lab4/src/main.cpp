#include<iostream>
#include"../include/header.h"
using namespace std;

int main(){
    int ch=0;
    int n=0;
    cout<<"Enter \n 1 for GCD of an array \n 2 for counting 1s in a binary array \n 3 for counting negative number in an array \n 4 for Mergesort \n 5 for Tower of hanoi"<<endl;
    cin>>ch;
    if(ch==5){
        cout<<"Enter tower height:";
        cin>>n;
        tower(n,'b','m','e');
    }
    else if(ch==4){
        mergesort23();
    }
    else if(ch==3){
        cout<<"Enter the number of inputs:";
        cin>>n;
        int a[n];
        cout<<"Enter the elements"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=countneg(a,0,n-1);
        cout<<"number of negatives= "<<count;
    }
    else if(ch==2){
        cout<<"Enter the number of inputs:";
        cin>>n;
        int a[n];
        cout<<"Enter the elements"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=countbin(a,0,n-1);
        cout<<"number of ones= "<<count;
    }
    else if(ch==1){
        cout<<"Enter the number of inputs:";
        cin>>n;
        int a[n];
        cout<<"Enter the elements"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int gcd=dc(a,0,n-1);
        cout<<"GCD="<<gcd;
    }
}