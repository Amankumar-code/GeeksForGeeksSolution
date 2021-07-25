class Solution{
    public:
    
    int digitsInFactorial(int n)
    {
        // code here
        if (n < 0)
        return 0;
 
    // base case
    if (n <= 1)
        return 1;
 
    double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);
 
    return floor(digits) + 1;
    }
};
