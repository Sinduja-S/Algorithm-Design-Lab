#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int den[100] = {0}, d = 0, x = 0, change[100] = {0}, iter = 0, temp_x, i=0, j=0;

void find_change (int k){

	for(i=k; i>=0; i--){
		if(den[i] <= temp_x){
			change[iter++] = den[i];
			temp_x -= den[i];
			i++;
		}
	}
}

int main (){

	cout<<"Enter number of denominations\n";
	cin>>d;
	cout<<"Enter the denominations\n";
	for(int i=0; i<d; i++)
		cin>>den[i];

	sort(den,den+d);

	cout<<"Enter x:\n";
	cin>>x;

	temp_x = x;

	cout<<"Denominations are: ";
	for(i=d-1; i>=0; i--){
		find_change(i);
		if(temp_x == 0){
			for(i=0; i<iter; i++)
				cout<<change[i]<<" ";
			cout<<endl;
			return 1;
		}
	}
	
	cout<<"No change is possible\n";
	
	return 0;
}