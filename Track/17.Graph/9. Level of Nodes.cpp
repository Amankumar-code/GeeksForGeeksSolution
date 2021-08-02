class Solution

{
    public:
    int nodeLevel(int V, vector<int> adj[], int X) 
    { 
        int level[V]={};
        vector<bool> visited(V,0);
        
        level[0]=0;
        visited[0]=true ;
        
        queue<int> q;
        
        q.push(0);
        
        
        while(!q.empty())
        {
            int a=q.front();
            q.pop();
           for(auto s:adj[a])
            {
                if(!visited[s]){
                level[s]=level[a]+1;
                if(s==X)
                {
                   return level[s];
                }
                visited[s]=1;
                q.push(s);}
            }
        }
        return -1;
    }

};
