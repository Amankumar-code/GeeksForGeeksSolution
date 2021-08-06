class Solution
{
    public:
    int even_odd(int key)
    {
    if(key%2==0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int max(int a,int b)
{
    if(a>b)
    return a;
    else
    {
        return b;
    }
}

int maxEvenOdd(int arr[], int n) 
{ 
    int flag;
    int count;
    int res=1;
    for(int i=0;i<n-1;i++)
    {
        flag=even_odd(arr[i]);
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(flag==2)
            {
                if(arr[j]%2!=0)
                {
                    count=count+1;
                }
                else
                {
                    break;
                }
            }
            if(flag==1)
            {
                if(arr[j]%2==0)
                {
                    count=count+1;
                }
                else
                {
                    break;
                }
            }
            flag=even_odd(arr[j]);
            res=max(count,res);
        }
    }
    return res;
} 
