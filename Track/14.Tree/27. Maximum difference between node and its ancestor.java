class Tree
{
    int maxDiff(Node root)
    {
        Global obj = new Global();
        maxDiffUtil(root,obj);
        return obj.globalDiff;
    }
    
    static int maxDiffUtil(Node root,Global obj){
        if(root == null)
            return Integer.MAX_VALUE;
            
        int leftSmall = maxDiffUtil(root.left,obj);
        int rightSmall = maxDiffUtil(root.right,obj);
        
        int currSmall = Math.min(leftSmall,rightSmall);
        obj.globalDiff = Math.max(obj.globalDiff,root.data-currSmall);
        
        return Math.min(root.data,currSmall);
        
    }
}

class Global{
    int globalDiff=Integer.MIN_VALUE;
}
