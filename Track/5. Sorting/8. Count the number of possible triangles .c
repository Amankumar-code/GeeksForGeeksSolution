int findNumberOfTriangles(int arr[], int n){
       
        
       qsort(arr, n, sizeof(arr[0]), comp);
 
    
    int count = 0;
 
    
    for (int i = 0; i < n - 2; ++i) {
       
        int k = i + 2;
 
        
        for (int j = i + 1; j < n; ++j) {
          
            while (k < n && arr[i] + arr[j] > arr[k])
                ++k;
 
           
            if (k > j)
                count += k - j - 1;
        }
    }
 
    return count;
    }
