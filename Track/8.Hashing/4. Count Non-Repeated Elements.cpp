class Solution
{
    public:
    int countNonRepeated(int arr[], int n)
    {
        unordered_map<int, int>m;
        int count=0;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(auto x:m)
            if(x.second ==1)
                ++count;
        return count;
    }

};
