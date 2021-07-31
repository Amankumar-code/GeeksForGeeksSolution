void bubbleSort(int arr[], int n)
{
    // Your code here    
    int temp;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
    
}
