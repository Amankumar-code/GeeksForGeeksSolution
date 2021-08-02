class GfG 
{
    public static Tree convert(Node head, Tree node) {
        if(head == null)
            return node;
            
        ArrayList<Integer> arr = new ArrayList<>();
        Node curr = head;
        while(curr != null){
            arr.add(curr.data);
            curr = curr.next;
        }
        node = new Tree(arr.get(0));
        convertUtil(node,arr,0);
        return node;
    }
    
    static void convertUtil(Tree root,ArrayList<Integer> arr,int index){
        if(index>=arr.size())
            return;
        if(2*index+1<arr.size())    
            root.left = new Tree(arr.get(2*index+1));
        
        if(2*index+2<arr.size())
            root.right = new Tree(arr.get(2*index+2));
        convertUtil(root.left,arr,2*index+1);
        convertUtil(root.right,arr,2*index+2);
    }
}
