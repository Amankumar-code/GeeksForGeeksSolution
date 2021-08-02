class Solution
{
    public static int time=0;
    static boolean bridgeUtil(int s,boolean[] visited,int[] disc,int[] low,int[] parent, ArrayList<ArrayList<Integer>> adj,int c,int d){
        
        visited[s]=true;
        disc[s]=++time;
        low[s]=++time;
        
        for(int j:adj.get(s)){
            if(visited[j] == false)
            {
                parent[j]=s;
                if(bridgeUtil(j,visited,disc,low,parent,adj,c,d) == true)
                    return true;
                low[s]=Math.min(low[s],low[j]);
                if(low[j] > disc[s]){
                    if((c == j && d==s) || (c==s && d==j))
                        return true;
                } 
            }
            else if(j != parent[s])
                    low[s]=Math.min(low[s],disc[j]);
        }
        return false;
    }
    static int isBridge(int V, ArrayList<ArrayList<Integer>> adj,int c,int d)
    {
        boolean[] visited=new boolean[V];
        int[] disc=new int[V];
        int[] low=new int[V];
        int[] parent=new int[V];
        time=0;
        for(int i=0;i<V;i++){
            if(visited[i] == false)
                if(bridgeUtil(i,visited,disc,low,parent,adj,c,d) == true)
                    return 1;
        }
        return 0;
    }
}
