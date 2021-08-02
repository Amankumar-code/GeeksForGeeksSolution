void printDeque(deque<int> Deq)
{
    int n=Deq.size();
    while(!Deq.empty())
    {
        cout<<Deq.front()<<" ";
        Deq.pop_front();
    }  
    cout<<endl;
}
