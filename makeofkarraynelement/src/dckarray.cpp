#include<iostream>
#include"../include/input.h"

using namespace std;
void sorter(int *a,int n,int n1,int n2, int ki, int kf){
    int i = 0, j = 0, k = 0;
    int arr3[n1+n2];
    while (i<n1 && j <n2)
    {
        if (*(a+ki*n+i) < *(a+kf*n+j)){
            arr3[k++] = *(a+ki*n+i);
            i++;
        }
        else{
            arr3[k++] = *(a+kf*n+j);
            j++;
        }
    }
    while (i < n1){
        arr3[k++] = *(a+ki*n+i);
        i++;
    }
    while (j < n2){
        arr3[k++] = *(a+kf*n+j);
        j++;
    }
    k=0;
    while(k<n1+n2){
        *(a+ki*n+k)=arr3[k];
        k++;
    }
}

void dcmerger(int *a,int n, int ki,int kf){
    if(kf-ki==1){
        sorter(a,n,n,n,ki,kf);
    }
    if(ki!=kf){
        int st=ki;
        int nt=kf;
        int m=(ki+kf)/2;
        dcmerger(a,n,st,m);
        dcmerger(a,n,m+1,nt);
        sorter(a,n,n*(m-ki+1),n*(kf-m),ki,m+1);
    }
}


int main(){
    int k,n;
    cout<<"Enter k n"<<endl;
    cin>>k>>n;
    int a[k][n];
    getarray(a,n,k);
    dcmerger((int *)a,n,0,k-1);
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
}