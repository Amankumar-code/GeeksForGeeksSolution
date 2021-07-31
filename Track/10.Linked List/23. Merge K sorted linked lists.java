class Solution
{
   Node mergeKList(Node[]a,int N)
    {
        return mergeK(a,a[0],null,0,N);
    }
    static Node mergeK(Node a[],Node A,Node B,int i,int N)
    {
        Node curr = merge2(A,B);
        if(i==N-1)
            return curr;
            
        return mergeK(a,curr,a[i+1],i+1,N);
    }
    static Node merge2(Node A,Node B)
    {
        if(A == null)
            return B;
        if(B == null)
            return A;
            
        Node head = null;
        Node tail = null;
        
        if(A.data <= B.data)
        {
            head = A;
            tail = A;
            A = A.next;
        }
        else{
            head = B;
            tail = B;
            B = B.next;
        }
        while(A != null && B != null)
        {
            if(A.data <= B.data){
                tail.next = A;
                tail = A;
                A = A.next;
            }
            else{
                tail.next = B;
                tail = B;
                B = B.next;
            }
        }
        if(A == null)
            tail.next = B;
        if(B == null)
            tail.next = A;
            
        return head;
    }
}
