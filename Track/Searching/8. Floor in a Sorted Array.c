int findFloor(long long int arr[], int N, long long int K) {
    
    //Your code here
    
    int max=0;
    int index=0;
    
    for(int i=0;i<N;i++){
        if(arr[i]<=K){
            if(arr[i]>max){
                max=arr[i];
                index=i;
            }
        }
    }
    
    if(max==0){
        return -1;
    }else{
        return index;
    }
}
