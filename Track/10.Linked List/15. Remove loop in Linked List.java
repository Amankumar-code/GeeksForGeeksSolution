class Solution
{
     public static void removeLoop(Node head)
     {
        Node slow = head;
        Node fast = head;
        
        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast)
                break;
        }
        
        if(fast == null || fast.next == null)
            return ;
        
        slow = head;
        if(fast == head)
        {
            while(fast.next != head)
                fast = fast.next;
        }
        else{
            while(slow.next !=  fast.next)
            {
                slow = slow.next;
                fast = fast.next;
            }
        }
        fast.next = null;
    }
}
