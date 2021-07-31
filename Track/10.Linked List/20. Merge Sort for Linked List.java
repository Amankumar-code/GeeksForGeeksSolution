class Solution
{
    static Node mergeSort(Node head)
    {
        if(head == null || head.next == null)
            return head;
        
        Node slow = head;    
        Node fast = head;
        Node beforeMid = head;
        while(fast != null && fast.next != null)
        {
            beforeMid = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        Node mid = slow;
        beforeMid.next = null;
        
        Node left = mergeSort(head);
        Node right = mergeSort(mid);
        
        return sortedList(left,right);
    }
    
    static Node sortedList(Node a,Node b)
    {
        if(a == null)
            return b;
        if(b == null)
            return a;
        Node head = null;
        Node tail = null;
        
        if(a.data <= b.data)
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
        
        while(a != null && b != null)
        {
            if(a.data<=b.data)
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
        
        if(a != null)
        {
           tail.next = a;
           tail = a;
        }
        if(b != null)
        {
           tail.next = b;
           tail = b;
        }
        return head;
    }
}
