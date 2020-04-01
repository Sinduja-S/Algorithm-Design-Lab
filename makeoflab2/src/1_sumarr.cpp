#include <iostream>

using namespace std;

int sumarr1(int *a,int n,int p)
{
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==p)
                return(1);
        }
    }
    return(0);
}


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int binarySearch(int arr[],int x,int r, int l=0)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return 1;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return 0;
}
int sumarr3(int *a, int n, int p){
    heapSort(a,n);
    int c;
    for(int i=0;i<n;i++){
        c=binarySearch(a,p-a[i],n);
        if(c==1)
            return(1);
    }
    return(0);
}
int sumarr2(int *a, int n, int p)
{
    heapSort(a,n);
    int start=0,fin=n-1;
    while(start<fin)
    {
        if(a[start]+a[fin]==p)
            return(1);
        else if(a[start]+a[fin]<p)
            start++;
        else
            fin--;
    }
    return(0);
}


