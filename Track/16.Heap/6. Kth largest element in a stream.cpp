class Solution
{
    public:
    void kthLargest(int arr[], int n, int k)
{
	priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<k-1;i++)
    {
        cout<<-1<<" ";
        pq.push(arr[i]);
    }
    
    for(int i=k-1;i<n;i++)
    {
        if(i==k-1)
        { 
            pq.push(arr[i]);
            cout<<pq.top()<<" ";
        }
        else if(arr[i]>pq.top())
        {
            pq.push(arr[i]);
            pq.pop();
            cout<<pq.top()<<" ";
            
        }
        else
        {
            cout<<pq.top()<<" ";
        }
        
    }
}
};
