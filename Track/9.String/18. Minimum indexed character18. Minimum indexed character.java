class Solution
{
    public static int minIndexChar(String str, String pat)
    {
        int count[] = new int[256];
        int result = Integer.MAX_VALUE;
        Arrays.fill(count,-1);
    
        for(int i=0;i<str.length();i++)
            if(count[str.charAt(i)] == -1)
                count[str.charAt(i)] = i;
                
        for(int i=0;i<pat.length();i++)
                if(count[pat.charAt(i)] != -1)
                    result = Math.min(result,count[pat.charAt(i)]);
                   
        return (result != Integer.MAX_VALUE)?result:-1;
    
    }
}
