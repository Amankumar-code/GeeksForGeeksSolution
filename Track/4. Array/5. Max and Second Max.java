class Solution 
{
    public static ArrayList < Integer > largestAndSecondLargest(int sizeOfArray, int arr[]) 
    {
    int secondLargest = -1;
    int max1 = arr[0];
    int n = sizeOfArray;
    for (int i = 1; i < n; i++) 
    {

      if (arr[i] > max1) 
      {
        secondLargest = max1;
        max1 = arr[i];
      } else 
      {
        if ((arr[i] != max1) && (arr[i] > secondLargest)) 
        {
          secondLargest = arr[i];
        }
      }
    }
    ArrayList < Integer > ls = new ArrayList < > ();
    if (max1 != secondLargest) 
    {
      ls.add(max1);
      ls.add(secondLargest);
    } else {
      ls.add(max1);
      ls.add(-1);
    }
    return ls;
  }
}
