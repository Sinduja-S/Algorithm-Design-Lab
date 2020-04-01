
#include"logic1.h"

int rec_k_num_aux(int a[],int k);
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int iter_k_num(int arr[],int k)
{
	int a,b,c;
	a=arr[0];
	for(int i=1;i<k;i++)
	{
		b=arr[i];
		a=a<0?a*-1:a;
		b=b<0?b*-1:b;
		if(a<b) swap(&a,&b);
		if(b==0) continue;
		for(int i=0;a%b!=0;i++)
		{
			c=b;
			b=a%b;
			a=c;
		}
		a=b;
	}
	return b;
}

int rec_k_num(int arr[],int k)
{
	int temp[k];
	for(int i=0;i<k;i++)
		temp[i]=arr[i];
	return rec_k_num_aux(temp,k);
}

int rec_k_num_aux(int a[],int k)
{
	if(k==1) return a[0];
	int x;
	x=recgcd1(a[k-1],a[k-2]);
	a[k-1]=0;
	a[k-2]=x;
	rec_k_num_aux(a,k-1);
}