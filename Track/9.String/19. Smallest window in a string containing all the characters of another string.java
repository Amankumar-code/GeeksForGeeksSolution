class Solution
{
   public static String smallestWindow(String S, String P)
    {
        if(S.length()<P.length())
            return "-1";
        
        int start = 0;
        int end = P.length()-1;
        
        int startRes = 0;
        int endRes = 0;
        
        int visited[] = new int[26];
        int pattern[] = new int[26];
        int minLength = Integer.MAX_VALUE;
        
        for(int i=0;i<=end;i++)
        {
            visited[S.charAt(i)-'a']++;
            pattern[P.charAt(i)-'a']++;
        }
        
        if(compareWindows(visited,pattern))
            return generateResult(S,start,end);
            
        end++;
        visited[S.charAt(end)-'a']++;
        
        while(start<=end && end<S.length())
        {
            if(compareWindows(visited,pattern) && start<S.length())
            {
                visited[S.charAt(start)-'a']--;
                if(end-start+1<minLength){
                    startRes = start;
                    endRes = end;
                    minLength = end-start+1;
                }
                
                start++;
            }
            else
            {
                end++;
                if(end<S.length())
                    visited[S.charAt(end)-'a']++;
            }
        }
        
        return (minLength != Integer.MAX_VALUE)?generateResult(S,startRes,endRes):"-1";
    }
    
    public static boolean compareWindows(int visited[],int pattern[])
    {
        for(int i=0;i<26;i++)
        {
            if(visited[i] == 0 && pattern[i] == 0)
                continue;
            if(visited[i]<pattern[i])
                return false;
        }
        return true;
    }
    
    public static String generateResult(String str,int start,int end)
    {
        String result = "";
        for(int i=start;i<=end;i++)
            result+=str.charAt(i);
            
        return result;
    }
}
