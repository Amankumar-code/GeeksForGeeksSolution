class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int a[], int n)
{
   //Your code here
   int ans=0;
   int c=0;

   for(int i=1;i<n;i++)
   {
       if(a[i-1]<a[i])
       c++;
       else
       {
       ans = max(ans,c);
       c=0;
       }
   }
   return max(ans,c);
}
};
