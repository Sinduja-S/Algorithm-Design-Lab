#include <iostream>

using namespace std;
int arr1(int *a){
    int i=0;
    while(a[i]!=-1){
        i++;
    }
    return(i);
}

int arr2(int *a){
    int fl=0,i=1;
    while(fl==0){
        if(a[i-1]<=0)
            fl=1;
        else{
            i=i*2;
        }
    }
    int b=i/2-1,e=i-1;
    int m=(b+e)/2;
    while(b<e-1){
        if(a[m]<=0)
            e=m;
        else
            b=m;
        m=(b+e)/2;
    }
    return(e+1);
}

int arr3(int *a, int s=0, int u=9999){
    if(s==u)
        return (u);
    else{
        int fl=0,i=1;
        int t,up=u;
        while(fl==0){
            t=i*i;
            if(s+t-1>u){
                up=u;
                break;}
            if(a[s+t-1]<=0){
                fl=1;
                up=t+s-1;
                break;
            }
            else{
                i=i+1;
                up=(i*i)+s-1;
            }
        }
        return(arr3(a,s+(i-1)*(i-1),up));
    }
}


