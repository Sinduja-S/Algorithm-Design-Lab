#include <iostream>

using namespace std;
int reclcm(int a, int b)
{   a=a>0?a:-1*a;
    b=b>0?b:-1*b;
    static int x=0;
    x+=b;
    if((x%a==0)&&(x%b==0))
        return x;
    else
        return reclcm(a,b);
}
int recgcd3(int a, int b)
{    a=a>0?a:-1*a;
    b=b>0?b:-1*b;
   if(a==0)
        return b;
    if(b==0)
        return a;

    return (a*b)/reclcm(a,b);
}
