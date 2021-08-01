class Solution 
{
    static int[] maxOfMin(int[] arr, int N) 
    {
        Stack<Integer> st = new Stack<>();
        int op[] = new int[N];
        
        int ps[] = previousSmaller(arr,N,st);
        st.clear();
        int ns[] = nextSmaller(arr,N,st);
        st.clear();
        
        for(int i=0;i<N;i++)
        {
                int index = ns[i]-ps[i]-2;
                op[index] = Math.max(op[index],arr[i]);
        }
        
        for(int i=N-2;i>=1;i--)
        {
            op[i] = Math.max(op[i+1],op[i]);
        }
        return op;
    }
    
    static int [] previousSmaller(int arr[],int N,Stack<Integer> st)
    {
        int ps[] = new int[N];
        
        for(int i=0;i<N;i++)
        {
            while(!st.isEmpty() && arr[i]<=arr[st.peek()])
                st.pop();
            
            ps[i] = (st.isEmpty())?-1:st.peek();
            st.push(i);
        }
        return ps;
    }
    
    static int [] nextSmaller(int arr[],int N,Stack<Integer> st)
    {
        int ns[] = new int[N];
        
        for(int i=N-1;i>=0;i--)
        {
            while(!st.isEmpty() && arr[i]<=arr[st.peek()])
                st.pop();
                
            ns[i] = (st.isEmpty())?N:st.peek();
            st.push(i);
        }
        return ns;
    }
}
