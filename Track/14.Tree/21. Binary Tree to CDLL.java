class Solution
{ 
    Node prev;
    Node temp;
    Node bTreeToClist(Node root)
    {
        if(root == null)
            return root;
            
        Node head = bTreeToClist(root.left);
        boolean flag = false;
        
        if(prev == null){
            temp = root;
            head = root;
        }
        else{
            prev.right = root;
            root.left = prev;
        }
        prev = root;
        
        bTreeToClist(root.right);
        if((temp == head && prev!=temp)|| temp.left == null && temp.right == null){
            prev.right = temp;
            temp.left = prev;
        }
        return head;
    }
    
}
