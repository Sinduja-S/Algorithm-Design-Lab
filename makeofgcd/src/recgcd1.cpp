#include <iostream>


using namespace std;

int recgcd1(int a, int b)
{
    a=a>0?a:-1*a;
    b=b>0?b:-1*b;
    
    if(a==0)
        return b;
    else
        return recgcd1(b%a,a);
}
