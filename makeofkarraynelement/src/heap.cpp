#include<bits/stdc++.h> 
#include"../include/input.h"
using namespace std; 
  

struct MinHeapNode 
{ 
    int element; 
    int i; 
    int j; 
}; 
  
void swap(MinHeapNode *x, MinHeapNode *y); 
  
class MinHeap 
{ 
    MinHeapNode *harr;  
    int heap_size;
public: 
    MinHeap(MinHeapNode a[], int size); 
  
    void MinHeapify(int ); 
  
    int left(int i) { return (2*i + 1); } 
  
    int right(int i) { return (2*i + 2); } 
  
    MinHeapNode getMin() { return harr[0]; } 
  
    void replaceMin(MinHeapNode x) { harr[0] = x;  MinHeapify(0); } 
}; 
  
int *mergeKArrays(int *arr,int n, int k) 
{ 
    int *output = new int[n*k];  
  
    MinHeapNode *harr = new MinHeapNode[k]; 
    for (int i = 0; i < k; i++) 
    { 
        harr[i].element = *(arr+i*n); 
        harr[i].i = i;  
        harr[i].j = 1;   
    } 
    MinHeap hp(harr, k); 
  
    for (int count = 0; count < n*k; count++) 
    { 
        MinHeapNode root = hp.getMin(); 
        output[count] = root.element; 
  
        if (root.j < n) 
        { 
            root.element = *(arr+n*root.i+root.j); 
            root.j += 1; 
        } 
        else root.element =  INT_MAX; 
  
        hp.replaceMin(root); 
    } 
  
    return output; 
} 
MinHeap::MinHeap(MinHeapNode a[], int size) 
{ 
    heap_size = size; 
    harr = a;  
    int i = (heap_size - 1)/2; 
    while (i >= 0) 
    { 
        MinHeapify(i); 
        i--; 
    } 
} 
  
void MinHeap::MinHeapify(int i) 
{ 
    int l = left(i); 
    int r = right(i); 
    int smallest = i; 
    if (l < heap_size && harr[l].element < harr[i].element) 
        smallest = l; 
    if (r < heap_size && harr[r].element < harr[smallest].element) 
        smallest = r; 
    if (smallest != i) 
    { 
        swap(&harr[i], &harr[smallest]); 
        MinHeapify(smallest); 
    } 
} 
  
void swap(MinHeapNode *x, MinHeapNode *y) 
{ 
    MinHeapNode temp = *x;  *x = *y;  *y = temp; 
} 
  
void printArray(int arr[], int size) 
{ 
   for (int i=0; i < size; i++) 
       cout << arr[i] << " "; 
} 
  
int main() 
{ 
    
    int k,n;
    cout<<"Enter k n"<<endl;
    cin>>k>>n;
    int a[k][n];
    getarray((int *)a,n,k);  
    int *output = mergeKArrays((int *)a,n,k); 
  
    cout << "Merged array is " << endl; 
    printArray(output, n*k); 
  
    return 0; 
}