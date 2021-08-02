class Solution
{
    static ArrayList <Integer> levelOrder(Node node) 
    {
        ArrayList<Integer> bft = new ArrayList<>();
        if(node == null)
            return bft;
        
        Queue<Node> q = new LinkedList<>();
        q.add(node);
        
        while(!q.isEmpty()){
            Node curr = q.poll();
            bft.add(curr.data);
            
            if(curr.left != null)
                q.add(curr.left);
            if(curr.right != null)
                q.add(curr.right);
        }
        return bft;
    }
}
