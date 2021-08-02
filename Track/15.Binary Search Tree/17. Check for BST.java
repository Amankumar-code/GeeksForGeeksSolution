public class Solution
{
    boolean isBST(Node root)
        {
            return isValid(root,Integer.MIN_VALUE,Integer.MAX_VALUE);
        }
        
    boolean isValid(Node root,int min,int max){
        if(root == null)
            return true;
        
        return (root.data>min 
            && root.data<max 
            && isValid(root.left,min,root.data) 
            && isValid(root.right,root.data,max));
    }
}
