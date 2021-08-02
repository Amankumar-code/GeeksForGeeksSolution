void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    k = k%n; 
    for(int i=1; i<=k; i++)
    {
        int val = deq.front();
        deq.pop_front();
        deq.push_back(val);
    }
}
void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
  k=k%n;
      for(int i=1; i<=k; i++)
    {
        int val = deq.back();
        deq.pop_back();
        deq.push_front(val);
    }
}
