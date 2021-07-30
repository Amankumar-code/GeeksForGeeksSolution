class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int arr[], int n, int m, int curr_min)
{
    int studentsRequired = 1;
    int curr_sum = 0;
 
    // iterate over all books
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] > curr_min)
            return false;

        if (curr_sum + arr[i] > curr_min)
        {
            
            studentsRequired++;

            curr_sum = arr[i];
 
            if (studentsRequired > m)
                return false;
        }
 
        // else update curr_sum
        else
            curr_sum += arr[i];
    }
    return true;
}
