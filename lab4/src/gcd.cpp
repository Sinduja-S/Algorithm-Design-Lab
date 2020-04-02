using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}

int dc(int *a,int s,int e){
    if((e-s)==1)
        return(gcd(a[s],a[e]));
    if(e==s)
        return(a[e]);
    else{
    int z1,z2;
    z1=dc(a,s,(s+e)/2);
    z2=dc(a,(s+e)/2+1,e);
    return(gcd(z1,z2));
    }
}