class Solution
{
    ArrayList<Integer> rightView(Node root) 
    {
    
       ArrayList<Integer> al = new ArrayList<>();
       if (root == null) 
        {   
            return al;
        }
              
        Queue<Node> queue = new LinkedList<>(); 
        queue.add(root); 
          
        while (!queue.isEmpty())  
        {    
            int n = queue.size(); 
            for (int i = 1; i <= n; i++) { 
                Node temp = queue.poll(); 
                if (i == n) 
                    al.add(temp.data); 
                if (temp.left != null) 
                    queue.add(temp.left); 
                if (temp.right != null) 
                    queue.add(temp.right); 
            } 
        
           
        } 
         return al;
    }
}
