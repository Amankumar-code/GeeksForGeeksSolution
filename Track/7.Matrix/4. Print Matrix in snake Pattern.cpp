class Solution
{   
    public:
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int n1=matrix.size();  
        vector<int>ans;
        for(int i=0;i<n1;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n1;j++)
                {
                    ans.push_back(matrix[i][j]);
                }
            }
            else
            {
                for(int j=n1-1;j>=0;j--)
                ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};
