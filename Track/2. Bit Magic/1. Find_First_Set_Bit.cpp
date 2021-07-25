class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    
    unsigned int getFirstSetBit(int n){
        int f=1, count=0;
        while(n)
        {
            if((f&n)>0) return count+1;
            else
            {
                count++;
                n=n>>1;
            }
        }
        return count;
        
    }
};
