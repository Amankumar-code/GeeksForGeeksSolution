int countOnes(int arr[], int N)
{
    //Your code here
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]==1){
            count++;
        }
    }
    return count;
}
