class Tree
{
     public static int isSumProperty(Node root)
    {
        if(root == null)
            return 1;
        
        if(root.left == null && root.right == null)
            return 1;
        
        int sum = 0;
        if(root.left != null)
            sum+=root.left.data;
        if(root.right != null)
            sum+=root.right.data;
        
        return (sum == root.data)?Math.min(isSumProperty(root.left),isSumProperty(root.right)):0;
    }
}
