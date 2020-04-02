#include <iostream>
using namespace std;
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
void merge2(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        merge2(arr, l, m);
        merge2(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void merge3(int arr[], int l, int r)
{
    if (l < r)
    {
        int m= (r-l)/3;

        merge3(arr, l, m+l);
        merge3(arr, m+1+l, m+m+1+l);
        merge3(arr,m+m+2+l,r);

        merge(arr,l,m+l,m+m+1+l);
        merge(arr, l,m+m+1+l,r );
    }
}

void mergesort23()
{
    int n;
    cout<<"Enter the number of inputs:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ch=0;
    cout<<"Enter \n 1 for two way sort \n 2 for three way sort";
    cin>>ch;
    if(ch==1){
        merge2(a,0,n-1);
        for(int i=0;i<n;i++)
            cout << a[i]<<" ";
    }
    else if(ch==2){
        merge3(a,0,n-1);
        for(int i=0;i<n;i++)
            cout << a[i]<<" ";
    }
    
}