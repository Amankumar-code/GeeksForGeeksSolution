class Solution
{
    static public class helper
    {         
        Node root; 
        int status;
        helper(Node root, int status)
        {
            this.root = root;
            this.status = status;
        }
    };
    public static int moveOne(Stack<helper> st)
    {
        while(st.size() > 0)
       {
           helper rem = st.peek();
           
           if(rem.root == null)
           {
               st.pop() ; 
               continue;
           }
           
           if(rem.status == 0)
           {
               rem.status ++ ;
               st.push(new helper(rem.root.left, 0));
           }
           else
           {
               st.pop();
               st.push(new helper(rem.root.right, 0));
               return rem.root.data;
           }
       }
       return -1; 
    }
    public List<Integer> merge(Node root1,Node root2)
    {
       List<Integer> res = new ArrayList<Integer>();  
       Stack<helper> one = new Stack<>(), two = new Stack<>()  ;
       one.push(new helper(root1, 0));
       two.push(new helper(root2, 0));
       
       boolean flag1, flag2 = flag1 = false;
       int first = moveOne(one);
       int second = moveOne(two);
       
       
       while(one.size() > 0  && two.size() > 0)
       {
           if(flag1 == true)
            {
                first = moveOne(one);
                flag1 = false;
            }
            if(flag2 == true)
            {
                second = moveOne(two);
                flag2 = false;
            }
            
            if(first == -1 || second == -1)
                break ;
            
            if(first < second)
            {
                flag1 = true ;
                res.add(first);
            }
            else
            {
                flag2 = true; 
                res.add(second);
            }
       }
       
       while(one.size() > 0 && first != -1)
       {
           res.add(first);
           first = moveOne(one);
       }
       
       while(two.size() > 0 && second != -1)
       {
           res.add(second);
           second = moveOne(two);
       }
       
       
       return res;
    }
}
