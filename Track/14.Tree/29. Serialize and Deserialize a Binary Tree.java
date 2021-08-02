class Tree 
{
    int index;
	public void serialize(Node root, ArrayList<Integer> A) {
	    if(root == null){
	        A.add(-1);
	    }else{
	        A.add(root.data);
    	    serialize(root.left,A);
    	    serialize(root.right,A);
	    }
	}
	
    public Node deSerialize(ArrayList<Integer> A){
        if(index == A.size())
            return null;
        int val = A.get(index);
        index++;
        if(val == -1)
            return null;
        Node root = new Node(val);
        
        root.left =deSerialize(A);
        root.right=deSerialize(A);
        
        return root;
        
    }
};
