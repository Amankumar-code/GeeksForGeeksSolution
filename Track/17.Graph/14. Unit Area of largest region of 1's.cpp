class Solution
{
    public:
    int isSafe(vector<vector<int>>&grid, int row, int col,vector<vector<bool>>&visited)
    {
        return (row >= 0) && (row < grid.size()) && (col >= 0) && (col < grid[0].size()) && (grid[row][col]==1 && !visited[row][col]);
    }
    void dfs(vector<vector<int>>&grid,int l,int m,vector<vector<bool>> &visited,int &count)
    {
        static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
        static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

        visited[l][m] = true;

        for (int k = 0; k < 8; ++k)
        if (isSafe(grid, l + rowNbr[k], m + colNbr[k], visited))
        {
            count=count+1;
            dfs(grid, l+ rowNbr[k], m + colNbr[k], visited,count);
        }   
    }
    int findMaxArea(vector<vector<int>>& grid) 
    {
        
        int n=grid.size();
        int k=grid[0].size();
        
        vector<vector<bool>> visited(n,vector<bool>(k));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                visited[i][j]=0;
            }
        }
        int result=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(grid[i][j]==1 &&!visited[i][j])
                {
                    int count=1;
                    dfs(grid,i,j,visited,count);
                    
                    result=max(result,count);
                   
                }
            }
        }
       return result; 
    }
};
