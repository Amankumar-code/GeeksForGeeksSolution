class Solution
{
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
    {
        vector<int> indeg(V,0),res;
         for(int i=0;i<V;i++)
         {
             for(auto s:adj[i])
             {
                 indeg[s]++;
                 
             }
         }
          
          queue<int> q;
          for(int i=0;i<V;i++)
          {
              if(indeg[i]==0)
                q.push(i);
          }
          
          while(!q.empty())
          {
              int k=q.front();
              
              q.pop();
             res.push_back(k);
                  for(auto f:adj[k])
                  {
                      indeg[f]--;
                      if(indeg[f]==0)
                      {
                          q.push(f);
                      }
                  }
              
          }
          return res;
    }
};
