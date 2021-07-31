class Solution
{
    static int subArraySum(int arr[], int n, int sum)
    {
        HashMap<Integer,Integer> hm = new HashMap<>();
        
        int prefixSum = 0;
        int count = 0;
        hm.put(0,1);
        
        for(int i=0;i<n;i++)
        {
            prefixSum += arr[i];
            
            if(hm.containsKey(prefixSum-sum))
            {
                int value = hm.get(prefixSum-sum);
                count += value;
            }
            
            if(!hm.containsKey(prefixSum))
                hm.put(prefixSum,1);
            else{
                int value = hm.get(prefixSum)+1;
                hm.put(prefixSum,value);
            }
        }
        return count;
    }
}
