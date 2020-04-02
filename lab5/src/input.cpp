#include<iostream>

using namespace std;

void getarray(int *a,int n,int k){
    int t;
    for(int i=0;i<k;i++){
        cout<<"Array "<<i+1<<endl;
        for(int j=0;j<n;j++){
            cin>>t;
            *(a+n*i+j)=t;
        }
    }
}