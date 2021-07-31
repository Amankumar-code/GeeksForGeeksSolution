class Solution
{
    public:
    bool check(vector<ll> A, vector<ll> B, int N) 
    {
        unordered_map<int,int>m;
        int i;
        for(i=0;i<N;i++)
            m[A[i]]++;
        for(i=0;i<N;i++)
            m[B[i]]--;
        for(auto x:m)
            if(x.second>0)
                return false;
        return true;
    }
};
