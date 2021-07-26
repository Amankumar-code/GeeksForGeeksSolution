class Solution
{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n)
    {
        vector<vector<int> > ans;
        vector<int> days;
        bool buy = true , sell = false;
        for(int i=1;i<n;i++)
        {
           
            if(A[i-1] < A[i])
            {
                if(buy == true) 
                {
                    days.push_back(i-1);
                    buy = false;
                    sell = true;
                }
            }
            if(A[i-1] > A[i])
            {
                if(sell == true)
                {
                    days.push_back(i-1);
                    sell = false;
                    buy = true;
                }
            }
            if(buy == false and sell == true and i == n-1 )
            {
                days.push_back(i);
                buy = true ;
                sell = false;
            }
            if(buy == true and sell == false)
            {
                if(days.size()>0)   
                ans.push_back(days);
                days.clear();
            }
        }
        return ans;
    }
};
