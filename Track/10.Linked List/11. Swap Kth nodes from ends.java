class GFG
{
     Node swapkthnode(Node head, int num, int K)
    {
        if(num<K || head == null || head.next == null )
            return head;
            
        Node currStart = head, prevStart = null;
        Node currEnd = head, prevEnd = null, nextEnd = head;
        
        for(int i=1;i<=K;i++)
            nextEnd = nextEnd.next;
            
        while(nextEnd != null)
        {
            prevEnd = currEnd;
            currEnd = currEnd.next;
            nextEnd = nextEnd.next;
        }
        
        nextEnd = currEnd.next;
        
        for(int i=1;i<K;i++)
        {
            prevStart = currStart;
            currStart = currStart.next;
        }
        
        if(prevStart != null)
            prevStart.next = currEnd;
        
        if(prevEnd != currStart)
            currEnd.next = currStart.next;
        else
            currEnd.next = currStart;
            
        currStart.next = nextEnd;
        
        if(prevEnd != null && prevEnd != currStart)
            prevEnd.next = currStart;
            
        if(K == 1)
            head = currEnd;
        if(K == num)
            head = currStart;
        return head;
    }
}
