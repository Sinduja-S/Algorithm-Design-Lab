#include <iostream>


using namespace std;
int iterlcm(int a, int b)
{
    a=a>0?a:-1*a;
    b=b>0?b:-1*b;
    for(int i=0;i+=a;)
            {
                if(i%b==0)
                    return i;
            }

}
int itergcd3(int a, int b)
{    a=a>0?a:-1*a;
    b=b>0?b:-1*b;
    if(a==0)
        return b;
    if(b==0)
        return a;

    return (a*b)/iterlcm(a,b);
}
