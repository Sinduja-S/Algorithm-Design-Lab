#include <iostream>
#include <cstdlib>
using namespace std;
int sum=0,summ=0;int li[100];
void combi(int ind,int s,int *a,int *b,int n,int k){
    if(ind==k+1){
        int summe;
        for(int j=0;j<n;j++){
            if(a[j]==1){
                summe=summe+b[j];
            }
        }
    int ot=abs(sum-2*summ);
    int gt=abs(sum-2*summe);
    if (gt<ot){
        summ=summe;
        for(int j=0;j<n;j++){
            li[j]=a[j];
        }
    }
    }
    else{
        for(int i=s;i<n-k+ind;i++){
            for(int j=s;j<n;j++){
                a[j]=0;}
            a[i]=1;
            combi(ind+1,i+1,a,b,n,k);
        }
    }
}
void summax()
{
    int n;
    cout<<"Enter the number of inputs(even)";
    cin>>n;
    int k=n/2;
    int a[n];a[0]=0;
    cout<<"enter"<<endl;
    int b[n];
    for(int j=0;j<n;j++){
        cin>>b[j];
        sum=sum+b[j];
        if(j<k){
            summ=summ+b[j];
            li[j]=1;
        }
    }
    combi(1,0,a,b,n,k);
    cout<<"basket1"<<endl;
    for(int j=0;j<n;j++){
        if(li[j]==1){
            cout<<b[j];
            cout<<' ';
        }
    }
    cout<<endl<<"basket2"<<endl;
    for(int j=0;j<n;j++){
        if(li[j]==0){
            cout<<b[j];
            cout<<' ';
        }
    }
}
