#include<iostream>

using namespace std;


void insertion_sort( int  arr[],  int   st, int   n);

void check( int  arr[])
{  int   count=0;
    for( int   i=1;i<1000000;i++)
        if(arr[i]<arr[i-1])
            count++;
    if(count==0)cout<<"correct"<<endl;
    else cout<<"oops ";       
}

void merge(int  arr[],  int   s,  int   mid,  int   e){

	 int   temp[e-s+1];
	 int   i = 0;
	 int   l = s;
	 int   r = mid+1;
	while( l<=mid && r<=e ){

		if(arr[l] < arr[r]){
			temp[i] = arr[l];
			l++;
			i++;
		}
		else if(arr[l] > arr[r]){
			temp[i] = arr[r];
			r++;
			i++;
		}
		else if(arr[l] == arr[r]){
			temp[i] = arr[r];
			i++;
			r++;
			temp[i] = arr[l];
			i++;
			l++;
		}

	}

	while(l <= mid){
		temp[i] = arr[l];
		i++; l++;
	}

	while(r <= e){
		temp[i] = arr[r];
		i++; r++;
	}
	
	for( int   j=0; j<i; j++){
		arr[s+j] = temp[j];
		// cout<<arr[j]<<" ";
	}
}

void merge_sort(int  arr[],  int   s,  int   e){

    if(e-s<=10000)
    {
        insertion_sort(arr,s,e);
    }

	else{
		int   mid = (s + e)/2;	
		merge_sort(arr, s, mid);
		merge_sort(arr, mid+1, e);
		merge(arr, s, mid, e);
	}

}

void insertion_sort( int  arr[],  int   st, int   n)  
{  
    int   i, key, j;  
    for (i = st+1; i <=n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  

        while (j >= st && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
	 
}  

int mergeplusinsert()
{

	int  arr[1000000];
	int  i;
	for(i=0;i<1000000;i++)
	arr[i]=1000000-i;
	cout<<"created"<<endl<<"It takes a while pls wait..."<<endl;
	merge_sort(arr,0,1000000-1);
	check(arr);
	int ch=0;
	cout<<"enter 1 for printing the array(its long)";
	cin>>ch;
	if(ch==1){
		for(i=0;i<1000000;i++)
			cout<<arr[i]<<" ";
	}
}