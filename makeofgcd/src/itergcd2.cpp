#include <iostream>


using namespace std;

int itergcd2(int a, int b)
{    a=a>0?a:-1*a;
    b=b>0?b:-1*b;
    if(b==0)
        return a;

    while(a*b!=0)
    {
      while(b>=a)
        b=b-a;

      a=a^b;
      b=a^b;
      a=a^b;
    }
    return b;
}
