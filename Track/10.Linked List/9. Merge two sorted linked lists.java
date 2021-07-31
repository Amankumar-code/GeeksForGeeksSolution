class LinkedList
{
    Node sortedMerge(Node headA, Node headB) 
    {
        Node head = null;
        Node tail = null;
        Node a = headA;
        Node b = headB;
     
        if(a.data<=b.data)
        {
            head = a;
            tail = a;
            a = a.next;
        }
        else
        {
            head = b;
            tail = b;
            b = b.next;
        } 
        while(a != null && b!= null)
        {
            if(a.data <= b.data)
            {
                tail.next = a;
                tail = a;
                a = a.next;
            }
            else
            {
                tail.next = b;
                tail = b;
                b = b.next;
            }
        } 
        if(a == null)
            tail.next = b;
        if(b == null)
            tail.next = a; 
        return head;
    } 
}
