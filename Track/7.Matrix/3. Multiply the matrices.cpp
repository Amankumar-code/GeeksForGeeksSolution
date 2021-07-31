class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& a, const vector<vector<int> >& b)
    {
        // code here
        
         vector<vector<int>>result;
        
        int n1=a.size();
        int m1=a[0].size();
        
        int n2=b.size();
        int m2=b[0].size();
        
        if(m1==n2)
        {
            result.resize(n1);
            for(int i=0;i<n1;i++)
            {
                result[i].assign(m2,0);
                for(int j=0;j<m2;j++)
                {
                    int sum=0; 
                    for(int k=0; k<m1; k++)
                    {
                       sum += a[i][k] * b[k][j]; 
                    } 
                    result[i][j] = sum;
                }
                
            }
            
        }
        return result;
    }
};
