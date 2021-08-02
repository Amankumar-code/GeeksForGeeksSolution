class Level_Order_Traverse
{
    static ArrayList<ArrayList<Integer>> levelOrder(Node node) 
    {
        ArrayList<ArrayList<Integer>> a = new ArrayList<ArrayList<Integer>>();
        Queue<Node> q=new LinkedList<Node>();
        q.add(node);
        int k=0;
        while(!q.isEmpty())
        {
            int count=q.size();
            
            for(int i=0;i<count;i++)
            {
                Node curr=q.poll();
                if( k >= a.size())
                {
                    a.add(new ArrayList<Integer>());
                }
                a.get(k).add(curr.data);
                if(curr.left!=null)
                {
                    q.add(curr.left);
                }
                if(curr.right!=null)
                {
                    q.add(curr.right);
                }
            }
            
            k++;
        }
        return a;
    }
}
