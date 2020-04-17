#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main () {

	int den[100] = {0}, d = 0, x = 0, table[100][100] = {0}, iter = 0, temp_x, i=0, j=0, temp = 0;

	cout<<"Enter number of denominations\n";
	cin>>d;
	cout<<"Enter the denominations\n";
	for(int i=0; i<d; i++)
		cin>>den[i];

	sort(den,den+d);

	cout<<"Enter value\n";
	cin>>x;

	//Just for 1st row
	for(j=0; j<x+1; j++){
		if(!(j%den[i])){
			table[i][j] = j / den[i];
		}
		else{
			table[i][j] = 0;
		}
	}

	//For next rows
	for(i=1; i<d; i++){

		table[i][0] = 0;

		for(j=1; j<x+1; j++){

			if(j == den[i]){
					table[i][j] = 1;
			}
			if(j<den[i]){
				if(!(j / den[i])){
					table[i][j] = table[i-1][j];
				}
				else{
					table[i][j] = (table[i-1][j] < (j / den[i]))?table[i-1][j]:(j / den[i]);
				}
			}
			if(j>den[i]){
				
				if(!table[i][j - den[i]]){
					table[i][j] = table[i-1][j];
				}
				else{
					temp = table[i][j - den[i]] + 1;
					if(!table[i-1][j]){
						table[i][j] = temp;
					}
					else{
						table[i][j] = (temp<table[i-1][j])?temp:table[i-1][j];
					}
				}
			}
		}
	}

	//Printing the table
	cout<<"Table:\n  ";
	for(i=0; i<x+1; i++)
		cout<<i<<" ";
	cout<<endl;

	for(int i=0; i<d; i++){
		cout<<den[i]<<" ";
		for (int j = 0; j < x+1; j++)
		{
			
			cout<<table[i][j]<<" ";
			if(j>=10){
				cout<<" ";
			}
		}
		cout<<endl;
	}

	//Printing the Denominations

	iter = table[d-1][x];
	// cout<<iter;
	i = d - 1;
	j = x;

	cout<<"denominations : ";
	while(iter>0){
		// cout<<"\n i = "<<i<<" j = "<<j<<endl;
		if(i == 0){
			cout<<den[i]<<" ";
			j -= den[i];
		}
		else{
			if( (table[i-1][j]!= 0) ){
				if((table[i-1][j] > table[i][j])){
					cout<<den[i]<<" ";
					j -= den[i];
				}
				else{
					i -= 1;
					iter += 1;
				}
			}	
			else{
				cout<<den[i]<<" ";
				j -= den[i];
			}
		}
		iter -= 1;
	}

	return 0;
}