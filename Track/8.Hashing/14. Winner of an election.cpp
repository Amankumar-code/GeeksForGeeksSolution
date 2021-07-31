class Solution{
  public:
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string, int>m;
        for(int i=0;i<n;++i)
            m[arr[i]]++;
            int vote=0;
            string winner;
        for(auto x:m)
        {
            if(x.second>vote)
            {
                vote=x.second;
                winner=x.first;
            }
            else if(x.second==vote and x.first <winner)
            {
                winner= x.first;
            }
        }
        vector<string>v;
        v.push_back(winner);
        v.push_back(to_string(vote));
        return v;
    }
};
