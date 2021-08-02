class Solution
{
	public:
	vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        vector<vector<int> > adj_mat(V, vector<int>(V, 0));
        for(int i=0; i<V; i++)
            for(int j=0; j<adj[i].size(); j++)
                adj_mat[i][adj[i][j][0]] = adj[i][j][1];
        
           vector<int>dist(V,INT_MAX);
        dist[S]=0;
        vector<bool>fin(V,false);
        for(int i=0;i<V-1;i++)
        {
            int u=-1;
        for(int i=0;i<V;i++)
        {
            if((u==-1 || dist[u]>dist[i]  ) && !fin[i] )
            u=i;
        }
        fin[u]=true;
        for(int v=0;v<V;v++)
        if(adj_mat[u][v]!=0 && fin[v]==false)
        {
            dist[v]=min(dist[v],dist[u]+adj_mat[u][v]);
        }
        }
        return dist;
    }
};
