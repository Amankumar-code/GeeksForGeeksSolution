class Geeks
{
    public static int sumExists(int arr[], int sizeOfArray, int sum)
    {
        HashSet<Integer> hs = new HashSet<>();
        
        for(int i=0;i<sizeOfArray;i++){
            if(hs.contains(sum-arr[i]))
                return 1;
            hs.add(arr[i]);
        }
        return 0;
    }
}
