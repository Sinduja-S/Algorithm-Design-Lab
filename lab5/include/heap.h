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



int *mergeKArrays(int *arr,int n, int k);

void heapsort();