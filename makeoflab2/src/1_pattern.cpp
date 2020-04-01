#include <iostream>

using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++)//pattern 1
        {
            for(int j=1;j<=n-i;j++)
            cout<<j;
            cout<<endl;
        }
}
void pattern2(int n){
    for(int i=0;i<n;i++)//pattern 1
        {
            for(int j=1;j<=n;j++){
                if(j<=i)
                    cout<<" ";
                else
                    cout<<j;
            }
            cout<<endl;
        }
}

void pattern3(int n){
    for(int i=0;i<n;i++)//pattern 1
        {
            for(int j=1;j<=i+1;j++){
                cout<<j;
            }
            cout<<endl;
        }
}

void pattern4(int n){
    for(int i=0;i<n;i++)//pattern 1
        {
            for(int j=1;j<=n;j++){
                if(j<n-i)
                    cout<<" ";
                else
                    cout<<j;
            }
            cout<<endl;
        }
}
void pattern5(int n, int s=0)
{
    for(int j=1;j<=n;j++)
    {
        if(j<=s || j>n-s)
            cout<<" ";
        else
            cout<<j;

    }
    cout<<endl;
    if(s*2<n-2)
        pattern5(n,s+1);
    for(int j=1;j<=n;j++)
    {
        if(j<=s || j>n-s)
            cout<<" ";
        else
            cout<<j;

    }
    cout<<endl;
}

