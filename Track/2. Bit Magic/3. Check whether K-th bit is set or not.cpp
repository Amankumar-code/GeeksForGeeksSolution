class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        
        int arr[100];
        
        for(int i=0;n>0;i++)
        {
            arr[i]=n%2;
            n=n/2;
        }
        
        int len=sizeof(arr)/sizeof(arr[0]);
        
        
        if(arr[k]==1){
            return true;
        }
        
        return false;
    }
};
