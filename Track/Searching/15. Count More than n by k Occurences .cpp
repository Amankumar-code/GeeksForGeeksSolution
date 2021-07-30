class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int m=n/k;
        int mainCount=0;
        int count=0;
        for(int i=0;i<n;i++){
             count=0;
            for(int j=0;j<n;j++){
                if(j==i){
                    count++;
                }
            }
            
            cout<<count<<endl;
            if(count>m){
                mainCount++;
            }
        }
        return mainCount;
    }
};
