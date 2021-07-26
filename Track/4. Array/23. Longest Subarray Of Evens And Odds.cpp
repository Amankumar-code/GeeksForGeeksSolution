class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int a[], int n) 
    { 
       //Your code here
       int longest = 1;
    int cnt = 1;
 
    // Iterate in the array
    for (int i = 0; i < n - 1; i++) {
 
        // increment count if consecutive
        // elements has an odd sum
        if ((a[i] + a[i + 1]) % 2 == 1) {
            cnt++;
        }
        else {
            // Store maximum count in longest
            longest = max(longest, cnt);
 
            // Reinitialize cnt as 1 consecutive
            // elements does not have an odd sum
            cnt = 1;
        }
    }
 
    // Length of 'longest' can never be 1
    // since even odd has to occur in pair or more
    // so return 0 if longest = 1
    if (longest == 1)
        return 0;
 
    return max(cnt, longest);
    } 
};
