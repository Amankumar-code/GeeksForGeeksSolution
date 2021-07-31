class Solution{
    public:
    ll findSubarray(vector<ll> arr, int n ) 
    {
        unordered_map<int,int>m;
        int i,cur_sum=0,count=0;
        for(i=0;i<n;i++)
    	{
    		cur_sum += arr[i];
    		if (cur_sum==0)
    			++count;
    		if(m.find(cur_sum)!=m.end())
    			count += m[cur_sum];
    		m[cur_sum]+=1;
    	}
    	return count;
    }
};
