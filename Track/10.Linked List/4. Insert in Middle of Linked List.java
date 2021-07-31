class Solution 
{
    public Node insertInMid(Node head, int data){
        if(head == null)
            return head;
            
        Node slow = head, fast = head;
        
        while(fast != null && fast.next != null && fast.next.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        
        Node temp = new Node(data);
        temp.next = slow.next;
        slow.next = temp;
        
        return head;
    }
}
