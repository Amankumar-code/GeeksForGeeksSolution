class Stacks
{
    void push1(int x, TwoStack sq)
    {
        if(sq.top1 >= sq.top2-1)
            return;
        sq.arr[++sq.top1] = x;
    }
    void push2(int x, TwoStack sq)
    {
        if(sq.top1 >= sq.top2-1)
            return;
        sq.arr[--sq.top2] = x;
    }
    int pop1(TwoStack sq)
    {
        if(sq.top1 == -1)
            return -1;
            
        return sq.arr[sq.top1--];
    }
    int pop2(TwoStack sq)
    {
        if(sq.top2 == sq.size)
            return -1;
        return sq.arr[sq.top2++];
    }
}
