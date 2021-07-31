class Swap
{
    public static Node pairwise_swap(Node head)
    {
        if(head == null || head.next == null)   
            return head;
        
        Node curr = head.next.next;
        Node prev = head;
        head = head.next;
        head.next = prev;
        prev.next = curr;
        
        while(curr != null && curr.next != null)
        {
            prev.next = curr.next;
            Node temp = curr.next.next;
            prev.next.next = curr;
            prev = curr;
            curr.next = temp;
            curr = temp;
        }
        
        return head;
    }    
}
