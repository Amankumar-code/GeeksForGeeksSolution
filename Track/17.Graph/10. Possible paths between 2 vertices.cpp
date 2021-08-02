class Solution 
{
    public:
    int countPaths(int V, vector<int> adj[], int source, int destination)
	{
	    bool visited[V];
        int count=0;
        for(int i=0;i<V;i++)
        {
            visited[i]=false;
        }
        queue<int>q;
        if(source==destination)
        count+=1;
        q.push(source);
        while(!q.empty())
        {
            int k=q.front();
            for(int u:adj[k])
            {
                if(u==destination)
                {
                    count++;
                }
                q.push(u);
            }
            q.pop();
        }
        return count;
	}
};
