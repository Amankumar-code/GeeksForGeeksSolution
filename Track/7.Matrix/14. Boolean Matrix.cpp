class Solution
{   
   public:
    void booleanMatrix(vector<vector<int> > &ma)
    {
        int r=ma.size();
        int c=ma[0].size();
        unordered_map<int,int>m,m1;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(ma[i][j]==1)
                {
                    m[i]=1;
                    m1[j]=1;
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(m.find(i)!=m.end() || m1.find(j)!=m1.end())
                ma[i][j]=1;
            }
        }
    }
};
