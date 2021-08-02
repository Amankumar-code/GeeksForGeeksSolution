class Solution
{
    int findMaxSum(Node node)
    {
        Global obj = new Global();
        findMax(node,obj);
        return obj.globalSum;
    }
    
    static int findMax(Node root,Global obj){
        if(root == null)
            return 0;
            
        int leftSum = findMax(root.left,obj);
        int rightSum = findMax(root.right,obj);
        
        int s1 = root.data;
        int s2 = root.data+Math.max(leftSum,rightSum);
        int s3 = root.data+leftSum+rightSum;
        
        obj.globalSum = Math.max(Math.max(Math.max(s1,s2),s3),obj.globalSum);
        return Math.max(s1,s2);
    }
}

class Global{
    int globalSum = Integer.MIN_VALUE;
}
