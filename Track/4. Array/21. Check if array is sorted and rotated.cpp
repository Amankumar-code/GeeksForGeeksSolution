class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int n){
        
        // Your code here
        
        int x = 0, y = 0;
 
    // Traversing array 0 to last element.
    // n-1 is taken as we used i+1.
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1])
            x++;
        else
            y++;
    }
 
    // If till now both x,y are greater then 1 means
    // array is not sorted. If both any of x,y is zero
    // means array is not rotated.
    if (x == 1 || y == 1) {
        // Checking for last element with first.
        if (arr[n - 1] < arr[0])
            x++;
        else
            y++;
 
        // Checking for final result.
        if (x == 1 || y == 1)
            return true;
    }
 
    // If still not true then definetly false.
    return false;
}
        
};
