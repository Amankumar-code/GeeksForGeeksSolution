class Intersect
{
	int intersectPoint(Node headA, Node headB)
	{
	    HashSet<Node> hs = new HashSet<>();
	    
	    for(Node curr = headA; curr != null; curr = curr.next)
	        hs.add(curr);
	        
	    for(Node curr = headB; curr != null; curr = curr.next)
	        if(hs.contains(curr))
	            return curr.data;
	            
	   return -1;
	}
}
