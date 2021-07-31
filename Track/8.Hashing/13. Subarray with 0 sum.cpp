class Solution
    {
    public:
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int>s;
        int i,cur_sum=0;
        for(i=0;i<n;i++)
        {
            cur_sum=cur_sum+arr[i];
            if(cur_sum==0)
                return true;
            if(s.find(cur_sum) != s.end())
                return true;
            else
                s.insert(cur_sum);
        }
        return false;
    }
};
