class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        //Your code here
        int temp=0;
        int newArr[sizeOfArray];
        temp=arr[index];
        int a,b,c;
        
        for(int i=sizeOfArray;i>index;i--){
            arr[i]=arr[i-1];
        }
        arr[index]=element;
        
        // for(int i=0;i<len+1;i++){
        //     cout<<newArr[i]<<" ";
        // }
        
    }
};
