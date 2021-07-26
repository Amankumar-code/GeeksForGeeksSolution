class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int height[], int n){
        // Code here
        if (n == 0 || n == 1)
        return 0;

    int leftPtr = 0, rightPtr = n - 1, leftMax = 0, rightMax = 0, res = 0;

    while (leftPtr < rightPtr) {

        if (height[leftPtr] < height[rightPtr]) {
            if (height[leftPtr] >= leftMax)
                leftMax = height[leftPtr];
            else
                res += leftMax - height[leftPtr];
            ++leftPtr;
        }
        else {
            if (height[rightPtr] >= rightMax)
                rightMax = height[rightPtr];
            else
                res += rightMax - height[rightPtr];
            --rightPtr;
        }
    }
    return res;
    }
};
