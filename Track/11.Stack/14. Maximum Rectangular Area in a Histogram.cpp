#define ll long long
#define vi vector<long long>
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vi previous_smaller_element(ll arr[], int n)
    {
        vi res(n, -1);
        
        stack<ll>st;
        for(ll i=0;i<n;i++)
        {
        	while(!st.empty() and arr[st.top()]>=arr[i])
        	{
        		st.pop();
        	}
        	res[i] = st.empty() ? -1 : st.top();
        	st.push(i); 
        }
        return res;
    }

    vi next_smaller_element(ll arr[], int n)
    {
    	vi res(n, n);
    	stack<ll>st;
    	for(ll i=0;i<n;i++)
    	{
    		while(!st.empty() and arr[st.top()]>arr[i])
    		{
    			res[st.top()]=i; 
    			st.pop();
    		}
    		st.push(i);
    	}
    	return res;
    }

    ll max(ll a, ll b)
    {
        if(a>b)
        return a;
        else return b;
    }

    
    long long getMaxArea(long long arr[], int n)
    {
      vi ps = previous_smaller_element(arr,n), ns = next_smaller_element(arr,n);
    	ll max_area = 0;
    
    	for (int i = 0; i < n; ++i)
    	{
    		ll b = ns[i] - ps[i] - 1;
    		ll l = arr[i];
    
    		max_area = max(l * b, max_area);
    	}
    	return max_area;
    }
};
