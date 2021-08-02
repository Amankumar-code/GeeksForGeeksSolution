class Solution
{
    public:
    vector<int>bfsOfGraph(int n, vector<int> g[])
    {
        vector<int>ans;
        int visited[n]={0};
        
        queue<int>q;
         int s=0;
         if(visited[s]==0)
         {
             ans.push_back(s);
             q.push(s);
              visited[s]=1;
         }
      
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            if(visited[u]==0)
            {
                ans.push_back(u);
            }
            visited[u]=1;
            for(auto x:g[u])
            {
                if(!visited[x])
                {
                    q.push(x);
                }
            }
        }
        return ans ;
    }
};
