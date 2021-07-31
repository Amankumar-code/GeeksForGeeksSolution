class Solution
{
    static Node segregate(Node head)
    {
        if(head == null && head.next == null)
            return head;
        
        Node curr = head;
        Node prev = null;
        
        Node tail = head;
        boolean flag = true;
        Node temp;
        
        while(tail != null && tail.next != null)
            tail = tail.next;
            
        Node mark  = tail;
        
        do{
            if(mark == curr)
                flag = false;
                
            if(curr.data == 1){
                prev = curr;
                curr = curr.next;
            }
            else if(curr.data == 0){
                temp = curr.next;
                if(prev != null){
                    prev.next = temp;
                    curr.next = head;
                    head = curr;
                }
                else{
                    prev = curr;
                    head = prev;
                }
                curr = temp;
            }
            else{
                temp = curr.next;
                if(prev != null)
                    prev.next = temp;
                else
                    head = temp;

                tail.next = curr;
                tail = curr;
                curr.next = null;
                curr = temp;
            }
        }while(flag);
        
        return head;
    }
}
