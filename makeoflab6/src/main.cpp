#include<iostream>
#include"q.h"
#include"tc.h"
#include"minmax.h"
#include<math.h>
using namespace std;
struct node  
{ 
  int min; 
  int max; 
};   
  
int product[][40] = {0};
int main()
{   int x;
    cout<<"Press either 1,2,3,4 or 5 for respective questions: "<<endl;
    cout<<"1 to find k smallest elements using quicksort partition routine"<<endl;
    cout<<"2 for n+logn-2 logic for minimum and second-minimum"<<endl;
    cout<<"3 for 3n/2-2 logic for maximum and minimum"<<endl;
    cout<<"4 for (logn)^2 logic (square of binary number)"<<endl;
    cout<<"5 for nrootn logic (primality check)"<<endl;

    cin>>x;
    
    int a[100];
    int n;
    int k;
    struct node minmax; 
    int bin[20], l = 0, bits;

    if(x==1)
    {
        cout<<"Enter size of array: "<<endl;  
        cin>>n;
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<"Enter k: ";
        cin>>k;
        
        imp(a,k,n);
    }
    else if(x==2)
    {
        cout<<"Enter size of array: "<<endl;  
        cin>>n;
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
        cin>>a[i];

        func(a, n);
    }
    else if(x==3)
    {
        cout<<"Enter size of array: "<<endl;  
        cin>>n;
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
        cin>>a[i]; 
        minmax=  getMinMax (a, n);
    cout<<"Minimum element: "<<minmax.min<<endl;
    cout<<"Maximum element: "<<minmax.max<<endl;
    }
    else if(x==4)
    {
        
	cout<<"Enter any positive number\n";
	cin>>n;
	 
	bits = ceil(log2f(n)) + 1;

	

	for(int q=0; q<l; q++){
		cout<<endl;
		for(int p=0; p<2*l; p++){
			product[q][p] = 0;
		}
	}

	l = decToBinary(n, bin);
    cout<<"Binary form(Reverse): ";
	for(int i=0; i<l; i++)
		cout<<bin[i];
	cout<<endl;

	mult(bin, product, l);

	cout<<"The product in binary is: ";
	for(int i=2*l-1; i>=0; i--)
		cout<<product[0][i];

	cout<<endl;
    }
    else if(x==5)
    {
        cout << "Enter number: " << endl;
    cin>>n;
    nrootn(n);
    }
    return 0;
}