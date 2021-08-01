class MyStack 
{
    StackNode top;

    void push(int a) 
    {
        StackNode temp = new StackNode(a);
        temp.next = top;
        top = temp;
    }
    int pop() 
    {
        if(top == null)
            return -1;
        int res = top.data;
        top = top.next;
        
        return res;
    }
}
