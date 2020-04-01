#include <iostream>


using namespace std;

int recgcd2(int a,int b)
{    a=a>0?a:-1*a;
    b=b>0?b:-1*b;
    if(a==0)
        return b;
    if(b==0)
        return a;

    if(a>b)
        return recgcd2(a-b,b);
    else
        return recgcd2(b-a,a);
}
