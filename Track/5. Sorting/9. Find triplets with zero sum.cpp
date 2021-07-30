class Solution
{
  public:
    bool findTriplets(int arr[], int n)
    { 
       
       bool sum=false;
      
        sort(arr, arr+n);
        for(int i=0; i<n; i++)
        {
            int l=i+1, r=n-1;
            
            while(l<r)
            {
                if(arr[i]+arr[l]+arr[r]==0)
                {
                    l++;
                    r--;
                    return true;
                    
                }
                
                else if(arr[i]+arr[l]+arr[r]<0)
                l++;
                
                else
                r--;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
