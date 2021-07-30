class Solution
{
    public static ArrayList<Integer> findUnion(int arr1[], int arr2[], int n, int m)
    {
        ArrayList<Integer> res=new ArrayList<Integer>();
        int i=0,j=0;
        while(i<n && j<m){
            
             while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
                i++;
            while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
                j++;
                
            if(arr1[i]<arr2[j]){
                res.add(arr1[i]);
                i++;
            }
            else if(arr2[j]<arr1[i]){
                res.add(arr2[j]);
                j++;
            }
            else{
                res.add(arr1[i]);
                i++;
                j++;
                
            }
        }
        while(i<n){
              while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
                i++;

                res.add(arr1[i]);
                i++; 
        }
        while(j<m){
            while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
                j++;
                res.add(arr2[j]);
                j++; 
        }
        return res;
    }
}
