class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        if(n==1) return a[0];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        
        for (auto i : m) 
        {
            if(i.second>n/2)
            return i.first;
        }
        return -1;
    }
};
