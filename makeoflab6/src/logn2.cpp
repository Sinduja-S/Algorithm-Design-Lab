#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


int decToBinary(int n, int bin[]) 
{ 

	int bit = 0;
	if(n == 0){
		bin[0] = 0;
		return 1;
	}
	int i = 0;
	while(n !=0 ){
		
		bin[i] = n%2;
		n = n/2;
		i++;
	}
	cout<<"No of bits: "<<i<<endl;

	return i;
}

void mult(int bin[], int product[][40], int l){

	int t = 0;
	while (t < l){
		
		int i=0, b=0;
		for(i; i<t; i++){
			product[t][i] = 0;
		}
		
		if(bin[t] == 1){
			for(i, b; b<l; b++, i++){
				product[t][i] = bin[b];
			}
		}
		else{
			for(i, b; b<l; b++, i++){
				product[t][i] = 0;
			}
		}


		t++;
	}


	int sum = 0, carry = 0;
	for(int i=1; i<l; i++){
		
		for(int j=0; j<2*l; j++){
			sum = carry + product[0][j] + product[i][j];
			product[0][j] = sum % 2;
			carry = sum / 2;
		}
	}


}


