static int preIndex;
public static Node constructTree(int pre[], int size) {
    int in[] = new int[size];
    for(int i=0;i<size;i++)
        in[i] = pre[i];
    preIndex = 0;
    Arrays.sort(in);
    return constructing(in,pre,0,size-1);
} 

public static Node constructing(int in[],int pre[],int start,int end){
    if(start>end)
        return null;
        
    Node root = new Node(pre[preIndex++]);
    
    int inIndex=0;
    for(int i=start;i<=end;i++)
        if(in[i] == root.data){
            inIndex = i;
            break;
        }
        
    root.left = constructing(in,pre,start,inIndex-1);
    root.right = constructing(in,pre,inIndex+1,end);
    
    return root;
} 
