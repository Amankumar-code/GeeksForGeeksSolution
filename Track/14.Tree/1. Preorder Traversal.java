class BinaryTree
{
    static ArrayList<Integer> preorder(Node root)
    {
        ArrayList<Integer> al = new ArrayList<>();
        
        if(root == null)
            return al;
        al.add(root.data);
        al.addAll(preorder(root.left));
        al.addAll(preorder(root.right));
        return al;
    }

}
