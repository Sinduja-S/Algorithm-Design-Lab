#include<iostream>
#include"logic1.h"
#include"logic2.h"
#include"logic3.h"
#include"array.h"
using namespace std;
int main()
{
	int a,b,c,k,arr[100];
        cout<<"Enter 1st number: ";
		cin>>a;
		cout<<"Enter 2nd number: ";
		cin>>b;
		cout<<"Enter size of the array";
		cin>>k;
		for(int i=0;i<k;i++)
			cin>>arr[i];

    int r1=recgcd1(a,b),r2=recgcd2(a,b),r3=recgcd3(a,b);
    int i1=itergcd1(a,b),i2=itergcd2(a,b),i3=itergcd3(a,b);
    int arr1=rec_k_num(arr,k);
    int arr2=iter_k_num(arr,k);
    cout<<"recursive gcd logic 1: "<<r1<<endl;
    cout<<"recursive gcd logic 2: "<<r2<<endl;
    cout<<"recursive gcd logic 3: "<<r3<<endl;
    cout<<"iterative gcd logic 1: "<<i1<<endl;
    cout<<"iterative gcd logic 2: "<<i2<<endl;
    cout<<"iterative gcd logic 3: "<<i3<<endl;
    cout<<"gcd of array by recursive logic: "<<arr1<<endl;
    cout<<"gcd of array by iterative logic: "<<arr2<<endl;
    


}