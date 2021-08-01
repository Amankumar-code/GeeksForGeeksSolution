class Solution
{
    public Stack<Integer> deleteMid(Stack<Integer> s,int sizeOfStack) 
    {
        ArrayDeque<Integer> stack = new ArrayDeque<Integer>();
        int mid = sizeOfStack % 2 == 0 ? sizeOfStack/2 - 1 : sizeOfStack/2;
        for(int i=sizeOfStack-1;i>mid;i--)
            stack.push(s.pop());
        s.pop();
        while(!stack.isEmpty())
            s.push(stack.pop());
        return s;
    }
}
