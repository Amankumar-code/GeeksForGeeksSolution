class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
    int ones = 0;
    
    for(int i=0;i<n;i++){
        if(a[i] == '1')
            ones++;
    }
    
    //total number of possible pairs of one
    return ones * (ones-1) / 2;
}


};
