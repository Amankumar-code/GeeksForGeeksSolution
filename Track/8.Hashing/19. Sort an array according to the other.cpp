class Solution{
    public:
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        unordered_map<int,int>map1;
        vector<int>v,v2;
        int i;
        for(i=0;i<N;i++)
            map1[A1[i]]++;
        for(i=0;i<M;i++)
        {
            if(map1.find(A2[i]) !=map1.end())
            {
                while(map1[A2[i]] !=0)
                {
                    v.push_back(A2[i]);
                    map1[A2[i]]--;
                }
            }
        }
        for(auto x: map1)
        {
            while(x.second != 0)
            {
                v2.push_back(x.first);
                --x.second;
            }
        }
        sort(v2.begin(),v2.end());
        for(i=0;i<v2.size();++i)
            v.push_back(v2[i]);
        return v;
    }
};
