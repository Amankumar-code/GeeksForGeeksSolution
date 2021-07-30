int peakElement(int arr[], int n)
{
   // Your code here
   int max=0;
   int index;
   for(int i=0;i<n;i++){
       if(arr[i]>max){
           max=arr[i];
           index=i;
       }
   }
   
   return index;
}
