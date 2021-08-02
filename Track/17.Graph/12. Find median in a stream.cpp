class Solution 
{
    public:
    vector<vector<int>>printGraph(int V, vector<int> adj[])
    {
        vector<vector<int> > y(V);
        for(int i=0; i<V; i++)
       {
           y[i].push_back(i);       
           for(int x: adj[i])
           {
                y[i].push_back(x);
           }
       }
       return y;
    }
};
