
class GfG
{
    void addNode(Node head_ref, int pos, int data)
	{
	    Node temp = new Node(data);
	    
	    if(head_ref == null)
        {
	        head_ref = temp; 
	        return;    
	    }
	    
	    Node curr = head_ref;
	    for(int i=0;i<pos;i++)
	        curr = curr.next;
	        
	    temp.next = curr.next;
	    if(curr.next != null)
	       curr.next.prev = temp;
	       
	    curr.next = temp;
	    temp.prev = curr;
	}
}
