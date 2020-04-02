#include <iostream>
using namespace std;
void har(int l[],int n){
    int li[300],a=0,b=100,c=200;
    for(int i=0;i<n;i++){
        if(l[i]==0){
            li[a]=0;a++;
        }
        else if(l[i]==1){
            li[b]=1;b++;
        }
        else{
            li[c]=2;c++;
        }
    }
    for(int i=0;i<a;i++){
        cout<<li[i]<<" ";}
    for(int i=100;i<b;i++)
        cout<<li[i]<<" ";
    for(int i=200;i<c;i++)
        cout<<li[i]<<" ";
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
void bubble(int *arr, int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (*(arr+j) > *(arr+j+1))
        {
           swap((arr+j),(arr+j+1));
           swapped = true;
        }
     }
     if (swapped == false)
        break;
   }
}


void ternarysort()
{   int n;
    cout<<"Enter number of elements";
    cin>>n;
    int k=n/2;
    int a[n];
    cout<<"enter"<<endl;
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    int ch=0;
    cout<<"Enter \n 1 for mergesort \n 2 for bubble \n 3 for hash if n is less than 100";
    cin>>ch;
    if(ch==1){      
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout << a[i] ;
    }
    else if(ch==2){
        bubble(a,n);
        for(int i=0;i<n;i++)
            cout << a[i] ;
    }
    else if(ch==3){
        har(a,n);
    }
}
