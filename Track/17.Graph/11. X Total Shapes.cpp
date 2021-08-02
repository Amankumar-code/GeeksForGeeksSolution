class Solution
{
    public:
    bool isvalid(int x,int y,int n,int m)
    {
        return(x<n&&x>=0&&y<m&&y>=0);
    }
    
    void trav(int y, int x, vector<vector<char>> &gr, vector<vector<int>> &vis, int dx[], int dy[], int n, int m)
    {
        vis[y][x]=1;
        for(int i=0;i<4;i++)
        {
            int posx=x+dx[i];
            int posy=y+dy[i];
            if(isvalid(posx,posy,n,m))
            {
                if(!vis[posy][posx]&&gr[posy][posx]=='X')
                {
                trav(posy,posx,gr,vis,dx,dy,n,m);
                }
            }
        }
    }
    
    int xShape(vector<vector<char>>& grid) {
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
        
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int> > vis(m,vector<int>(n,0));
        
        
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j]&&grid[i][j]=='X')
                {
                    
                  
                    cnt++;
                    trav(i,j,grid,vis,dx,dy,n,m);
                }
            }
        }
        return(cnt);
    }
};
