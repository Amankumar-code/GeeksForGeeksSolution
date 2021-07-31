class LinkedList
{
    static Node sortDoubly(Node head)
    {
        if(head == null || head.next == null)
            return head;
            
        Node slow = head;
        Node fast = head;
        
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        
        Node mid = slow;
        Node beforeMid = slow.prev;
        beforeMid.next = null;
        mid.prev = null;
        
        Node left = sortDoubly(head);
        Node right = sortDoubly(mid);
        
        return mergeDoubly(left,right);
    }
    
    static Node mergeDoubly(Node a,Node b){
        if(a == null)
            return b;
        if(b == null)
            return a;
            
        Node head = null;
        Node tail = null;
        Node temp = null;
        
        if(a.data <= b.data){
            head = a;
            tail = a;
            a = a.next;
        }
        else{
            head = b;
            tail = b;
            b = b.next;
        }
        
        while(a != null && b != null){
            if(a.data <= b.data){
                tail.next = a;
                temp = tail;
                tail = a;
                tail.prev = temp;
                a = a.next;
            }
            else{
                tail.next = b;
                temp = tail;
                tail = b;
                tail.prev = temp;
                b = b.next;
            }
        }
        
        if(a == null){
             tail.next = b;
             temp = tail;
             tail = b;
             tail.prev = temp;
        }
        if(b == null){
             tail.next = a;
             temp = tail;
             tail = a;
             tail.prev = temp;
        }
            
        return head;
    }
}
