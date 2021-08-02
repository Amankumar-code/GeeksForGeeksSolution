class Solution
{
    public:
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int dist[1001][1001];
        int visited[1001][1001];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dist[i][j] = INT_MAX;
                visited[i][j]=false;
            }
        }
           priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
           
        dist[0][0]=grid[0][0];
        
        pq.push({dist[0][0],{0,0}});
        
        while(!pq.empty())
        {
            auto temp=pq.top();
            pq.pop();
            int dis=temp.first;
            int x=temp.second.first;
            int y=temp.second.second;
            visited[x][y]=true;
            int dx[]={0,0,-1,1};
            int dy[]={-1,1,0,0};
            
            for(int i=0;i<4;i++)
            {
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0 && ny>=0 && nx<n && ny<n && !visited[nx][ny] and  dist[nx][ny]>dis+grid[nx][ny])
                   {
                       dist[nx][ny]=dis+grid[nx][ny];
                       pq.push({dist[nx][ny],{nx,ny}});
                   }
            }
        }
        
        return dist[n-1][n-1];
    }
};
