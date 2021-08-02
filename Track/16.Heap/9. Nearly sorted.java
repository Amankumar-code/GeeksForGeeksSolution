class Solution
{
    ArrayList <Integer> nearlySorted(int arr[], int num, int k)
    {
        ArrayList<Integer> al=new ArrayList<Integer>();
        PriorityQueue<Integer> pq=new PriorityQueue<Integer>();
        int x=Math.min(k,num-1);
        for(int i=0;i<=x;i++){
            pq.add(arr[i]);    
        }
        al.add(pq.peek());
        pq.poll();
        
        for(int i=k+1;i<num;i++){
            pq.add(arr[i]);
            al.add(pq.peek());
            pq.poll();
        }
        
        while(pq.isEmpty() == false){
            al.add(pq.peek());
            pq.poll();
        }
        return al;
    }
}
