class Solution
{
  public:
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
        deque <int> dq;
        vector <int> v;
        for(int i=0;i<k;++i)
        {
            while(!dq.empty() && a[i]>=a[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k;i<n;++i)
        {
            v.push_back(a[dq.front()]);
            while((!dq.empty()) && dq.front()<=i-k)
            {
                dq.pop_front();
            }
            while((!dq.empty()) && a[i]>=a[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        v.push_back(a[dq.front()]);
        return v;
    }
};
