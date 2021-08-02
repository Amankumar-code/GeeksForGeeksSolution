class Solution
{
    //Function to insert all elements of the array in deque.
    public static ArrayDeque<Integer> deque_Init(int arr[], int n)
    {
        ArrayDeque<Integer> dq=new ArrayDeque<Integer>();
        for(int i=0;i<n;i++)
        {
            dq.add(arr[i]);
        }
        return dq;
    }
}
