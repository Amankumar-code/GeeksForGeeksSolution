public static void eraseAt(ArrayDeque<Integer> deq , int X)
{
    if(deq.isEmpty())
    return;
    int c=0;
    Iterator itr=deq.iterator();
    Stack<Integer> st=new Stack<Integer>();
   
    while(itr.hasNext())
    {
        if(c==X)
        {
            itr.next();
        }
        else
        {
            st.push((Integer) itr.next());
        }
        c++;
    }
    deq.clear();
    while(!st.isEmpty())
    {
        deq.push(st.pop());    
    }
    
}

public static void eraseInRange(ArrayDeque<Integer> deq , int start, int end)
{
    if(deq.isEmpty())
        return;
    int c=0;
    Iterator itr=deq.iterator();
    Stack<Integer> st=new Stack<Integer>();
   
    while(itr.hasNext())
    {
        if(c>=start && c<end)
        {
            itr.next();
        }
        else
        {
            st.push((Integer) itr.next());
        }
        c++;
    }
    deq.clear();
    while(!st.isEmpty())
    {
        deq.push(st.pop());    
    }
}

public static void eraseAll(ArrayDeque<Integer> deq )
{
    deq.clear();
}
