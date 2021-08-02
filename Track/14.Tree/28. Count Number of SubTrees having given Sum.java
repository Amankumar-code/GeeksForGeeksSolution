class Tree
{
    int countSubtreesWithSumX(Node root, int X)
    {
        Counter obj = new Counter();
        subTreeSum(root,X,obj);
        return obj.count;
    }
    
    static int subTreeSum(Node root,int X,Counter obj){
        if(root == null)
            return 0;
        
        int leftSum = subTreeSum(root.left,X,obj);
        int rightSum = subTreeSum(root.right,X,obj);
        
        int sum = root.data+leftSum+rightSum;
        if(sum==X)
            obj.count++;
        
        return sum;
    }
}

class Counter{
    int count;
}
