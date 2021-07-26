class Solution
{
    public static int maxOccured(int L[], int R[], int n, int maxx)
    {
        int arr[]=new int[1000000];
        int sum=0,max=0,index=0;
        
        for(int i=0;i<n;i++)
        {
                arr[L[i]]++;
                arr[R[i]+1]--;
        }
        
        for(int i=0;i<1000000;i++)
        {
            sum+=arr[i];
            if(sum>max)
            {
                max=sum;
                index=i;
            }
        }
        return index;
    }
}
