class Geeks
{
    public static void insert(Stack<Integer> st, int x)
    {
        st.push(x);
    }
    public static void remove(Stack<Integer> st)
    {
        int x = st.pop();
        
    }
    public static void headOf_Stack(Stack<Integer> st)
    {
        int x = st.peek();
        System.out.println(x + " ");
    }
    public static boolean find(Stack<Integer> st, int val)
    {
        boolean exists = false;
        if(st.search(val) != -1)
            exists = true;
        
        return exists;
    }
}
