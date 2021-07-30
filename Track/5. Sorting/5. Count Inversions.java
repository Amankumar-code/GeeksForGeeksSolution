class Sorting
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        
        while(t-- > 0)
        {
            long n = sc.nextLong();
            long arr[] = new long[(int)n];
            
            for(long i = 0; i < n; i++)
             arr[(int)i] = sc.nextLong();
             
            System.out.println(new Solution().inversionCount(arr, n));
            
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution
{
    static long inversionCount(long arr[], long N)
    {
        return countInversions(arr, 0, (int)N-1);
    }
    static long countInversions(long[] arr, int l , int r){
        long res = 0;
        if (r > l){
            int mid = (l+r)/2;
            res+=countInversions(arr, l , mid);
            res+=countInversions(arr, mid+1, r);
            res+=merger(arr, l, mid, r);
        }
        return res;
    }
    static long merger(long[] arr, int l, int m, int r){
        int n1 = m-l+1;
        int n2 = r-m;
        long[] left = new long[n1];
        long[] right = new long[n2];
        
        for (int i = 0; i < n1; i++){
            left[i] = arr[l+i];  
        }
        for (int i = 0; i < n2; i++){
            right[i] = arr[m+1+i]; 
        }
        int i = 0;
        int j = 0;
        int k = l; 
        long res = 0;
        while (i < n1 && j < n2){
            if (left[i]<=right[j]){
                arr[k] = left[i];
                k++;
                i++;
            }
            else{
                arr[k] = right[j];
                j++;
                k++;
                res+=(long)(n1-i);
            }
        }
        while (i<n1){
            arr[k] = left[i];
            k++;
            i++;
        }
        while (j<n2){
            arr[k] = right[j];
            k++;
            j++;
    }
    return res;
    }
}
