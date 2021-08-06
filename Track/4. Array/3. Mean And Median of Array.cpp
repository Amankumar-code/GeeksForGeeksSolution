class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        //your code here
        //If median is in fraction then convert it to integer and return
    if (N % 2 != 0)
        return A[N / 2];
    return (A[(N - 1) / 2] + A[N / 2]) / 2.0;
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int sum=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        
        return sum/N;
    }
};
