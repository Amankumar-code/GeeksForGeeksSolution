class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
	vector<long long>res(n, -1);

	stack<long long>st;
	for(long long i=0;i<n;i++)
	{
		while(!st.empty() and arr[st.top()]<arr[i])
		{
			res[st.top()]=arr[i]; //pushing the values into res
			st.pop();
		}
		st.push(i); // pushing index onto stack
	}
	return res;
}
};
