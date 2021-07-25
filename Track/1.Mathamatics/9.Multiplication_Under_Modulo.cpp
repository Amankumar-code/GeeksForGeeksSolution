class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        int M=1000000007;
    a=a%M;
    b=b%M;
    return (a*b)%M;
    }
};
