#include<iostream>
#include<cmath>
using namespace std;
void nrootn(int n)
{
    int *a=new int[n];
    for(int i=0;i<n;i++)
        a[i]=1;
    int fl=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=i-1;j<n;j=j+i)
                a[j]=-1;


        if(a[n-1]==-1)
        {
            cout<<"not prime number"<<endl;
            fl=1;
            break;
        }
        else{
            for(int i=0;i<n;i++)
        a[i]=1;
        }

    }
    if(fl==0)
        cout<<"prime number"<<endl;
    

}
