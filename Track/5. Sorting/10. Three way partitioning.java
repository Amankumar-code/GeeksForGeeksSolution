class Solution
{
    public void threeWayPartition(int a[], int high, int low)
    {
        int start=0,end=a.length-1,t;
		for(int i=0;i<=end;)
		{
			if(a[i]<high)
			{
				t=a[start];
				a[start]=a[i];
				a[i]=t;
				start++;
				i++;
			}
			else if(a[i]>low)
			{
				t=a[end];
				a[end]=a[i];
				a[i]=t;
				end--;
			}
			else
				i++; 
        }
    }
}
