class Tree
{
    ArrayList<Integer> postOrder(Node root)
    {
        ArrayList<Integer> al = new ArrayList<>();
        
        if(root != null){
            al.addAll(postOrder(root.left));
            al.addAll(postOrder(root.right));
            al.add(root.data);
        }
        
        return al;
    }
}
