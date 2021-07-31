class GfG 
{
    Node cur; 
    int carry;
    int sum;
    void addCarryToRemaining(Node head, LinkedList res)  
    { 
        if(head != cur )
        {
            addCarryToRemaining(head.next,res);
            sum = (head.data + carry)%10;
            carry = (head.data + carry)/10;
            res.push(sum);
        }
        
    } 
    
	void addSameSize(Node head1, Node head2, LinkedList res) { 
	    Node h1 = reverse(head1);
	    Node h2 = reverse(head2);
	    
	    Node curr1 = h1;
	    Node curr2 = h2;
	    
	    while(curr1 != null && curr2 != null){
	        sum = (curr1.data + curr2.data + carry)%10;
	        carry = (curr1.data + curr2.data + carry)/10;
	        res.push(sum);
	        curr1 = curr1.next;
	        curr2 = curr2.next;
	    }
    }
    
    Node reverse(Node head){
        
        if(head == null || head.next == null)
            return head;
            
        Node restHead = reverse(head.next);
        Node restTail = head.next;
        restTail.next = head;
        head.next = null;
        
        return restHead;
    }
} 
