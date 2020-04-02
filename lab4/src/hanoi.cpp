#include<iostream>
using namespace std;

void tower(int n,char b, char a, char e){
    if(n==1)
        cout<<b<<" to "<<e<<endl;
    else{
        tower(n-1,b,e,a);
        cout<<b<<" to "<<e<<endl;
        tower(n-1,a,b,e);
    }
}