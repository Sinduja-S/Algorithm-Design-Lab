using namespace std;

int countbin(int *a,int s,int e){
    if((e-s)==1)
        return(a[s]+a[e]);
    if(e==s)
        return(a[e]);
    else{
    int z1,z2;
    z1=countbin(a,s,(e+s)/2);
    z2=countbin(a,(e+s)/2+1,e);
    return(z1+z2);
    }
}