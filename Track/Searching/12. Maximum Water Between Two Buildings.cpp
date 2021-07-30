class Solution
{
    public:
  
    int maxWater(int height[], int n) 
    { 
        //Your code here
        int maximum = 0;
 
      
    int i = 0, j = n - 1;
 
    while (i < j)
    {
 
        if (height[i] < height[j])
        {
            maximum = max(maximum, (j - i - 1) * height[i]);
            i++;
        }
 
        else if (height[j] < height[i])
        {
            maximum = max(maximum, (j - i - 1) * height[j]);
            j--;
        }
 
        else
        {
            maximum = max(maximum, (j - i - 1) * height[i]);
            i++;
            j--;
        }
    }
 
    return maximum;
    } 
};
