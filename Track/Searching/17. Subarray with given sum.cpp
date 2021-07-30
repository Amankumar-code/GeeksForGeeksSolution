class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        int curr_sum = arr[0], start = 0, end=0, i; 
	    for (i = 1; i <= n; i++) 
	    { 
		    while (curr_sum > sum && start < end) 
		    { 
			    curr_sum = curr_sum - arr[start]; 
			    start++; 
		    } 
		    if (curr_sum == sum) 
		    { 
			    return vector<int> {start+1,end+1}; 
		    } 
		    if (i < n) 
		    {
			curr_sum = curr_sum + arr[i]; 
			end++;
		    }
	    } 
        return vector<int> {-1};
    }
};
