class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int nums[], int n) 
    { 
        // Your code here
        

        for (int i = 0; i < n; ++i) {
            while ((nums[i] >= 1 && nums[i] <= n) && (nums[i] != nums[nums[i] - 1]))
                swap(nums[i], nums[nums[i] - 1]);
        }

        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1)
                return i + 1;
        }

        return n + 1;
    } 
};
