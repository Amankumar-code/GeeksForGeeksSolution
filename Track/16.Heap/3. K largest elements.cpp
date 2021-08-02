class Solution
{
    public static ArrayList<Integer> kLargest(int arr[], int n, int k)
    {
        ArrayList<Integer> res = new ArrayList<>();
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        
        for(int i=0;i<k;i++)
            minHeap.add(arr[i]);
            
        for(int i=k;i<n;i++)
            if(arr[i]>minHeap.peek()){
                minHeap.poll();
                minHeap.add(arr[i]);
            }
            
        while(!minHeap.isEmpty())
            res.add(minHeap.poll());
            
        Collections.reverse(res);
        
        return res;
    }
}
