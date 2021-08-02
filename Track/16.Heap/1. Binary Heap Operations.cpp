int MinHeap::extractMin() 
{
    if(heap_size<=0)
    {   
        return -1;
    }
    if(heap_size==1)
    {
        
        heap_size--;
        return harr[0];
    }
    int root=harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return root;
}

void MinHeap::deleteKey(int i)
{if(i<heap_size){
    decreaseKey(i,INT_MIN);
    extractMin();
}
}

void MinHeap::insertKey(int k) 
{
   
    
    heap_size++;
    int i=heap_size-1;
    harr[heap_size-1]=k;
    
    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(harr[i],harr[parent(i)]);
        i=parent(i);
    }
    
}
