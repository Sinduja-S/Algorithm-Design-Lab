#include<iostream>
#include"../include/input.h"
using namespace std;

void kpointer(int *a,int n, int k){

    int t=1;
    int ans[n*k];
    int poi[k]={0};
    int ne=0;
    int mini=-1;
    while(ne<k*n){
        for(int i=0;i<k;i++){
            if(poi[i]<n){
                if(mini==-1){
                    mini=i;
                }
                else{
                    if(*(a+mini*n+poi[mini])>*(a+i*n+poi[i])){
                        mini=i;
                    }
                }
            }
        }
        ans[ne]=*(a+mini*n+poi[mini]);
        ne+=1;
        poi[mini]++;
        mini=-1;
    }
    for(int j=0;j<n*k;j++){
        cout<<ans[j]<<" ";
    }
}
int main()
{
    int k,n;
    cout<<"Enter k n"<<endl;
    cin>>k>>n;
    int a[k][n];
    getarray((int *)a,n,k);
    kpointer((int *)a,n,k);
}