#include <iostream>
using namespace std;

int countneg(int *a,int s,int e){
    if(e==s){
        if(a[e]<0)
            return(1);
        return(0);
    }
    else{
    int z1,z2;
    cout<<e;
    cout<<s<<endl;
    z1=countneg(a,s,(e+s)/2);

    z2=countneg(a,(s+e)/2+1,e);

    return(z1+z2);
    }

}