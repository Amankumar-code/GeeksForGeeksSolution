class Solution 
{
    public:
    bool solve(vector<int> adj[],vector<bool> &vis,int s,int p){
        vis[s]=true;
        for(auto j:adj[s]){
            if(j==p)
            continue;
            if(vis[j])
            return true;
            if(!vis[j]){
                if(solve(adj,vis,j,s))  return true;
            }
           
        }
        return false;
    }
    	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool> vis(V,false);
	    for(int i=0;i<V;i++){
            if(!vis[i]){	    
	        if(solve(adj,vis,i,-1))    return true;
            }
	    }
	    return false;
	}
};
