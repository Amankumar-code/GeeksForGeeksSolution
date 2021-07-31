class Solution{
  public:
    vector <int> findPairs(int arr[], int n) 
    {
        unordered_map<int, int>m;
        int i;
        for(i=0;i<n;i++)
            m[arr[i]]=0;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
                continue;
            if(m.find(abs(arr[i])) != m.end())
            {
                m[abs(arr[i])]+=arr[i];
                if(m[abs(arr[i])]==0)
                {
                    v.push_back(-abs(arr[i]));
                    v.push_back(abs(arr[i]));
                    m[abs(arr[i])]=INT_MIN;
                }
            }
            m[abs(arr[i])];
        }
        return v;
    }
};
