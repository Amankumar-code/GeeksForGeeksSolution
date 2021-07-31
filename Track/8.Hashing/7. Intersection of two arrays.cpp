class Solution{
    public:
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        unordered_set<int>s;
        int i,count=0;
        if(n>=m)
        {
            for(i=0;i<m;i++)
                s.insert(b[i]);
            for(i=0;i<n;i++)
                if(s.find(a[i]) != s.end())
                {
                    ++count;
                    s.erase(a[i]);
                }
        }
        else
        {
            for(i=0;i<n;i++)
                s.insert(a[i]);
            for(i=0;i<m;i++)
                if(s.find(b[i]) != s.end())
                {
                    ++count;
                    s.erase(b[i]);
                }
        }
        return count;
    }
};
