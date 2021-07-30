void insert(int arr[], int i)
    {
        // Your code here  
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        int i, j,current;
	for(i=1;i<n;i++){
		current = arr[i];
		for(j=i-1;j>=0;j--){
			if(arr[j]>current){
				arr[j+1] = arr[j];
			}else
				break;
		}
		arr[j+1] = current;
	}
    }
