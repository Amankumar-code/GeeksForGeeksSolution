class Solution
{
    public ArrayList<Integer> dfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj)
    {
        boolean visited[] = new boolean[adj.size()];
        ArrayList<Integer> al = new ArrayList<>();
        
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfsOfGraph(i, adj, visited, al);
            }
        }
        return al;
    }
    
    void dfsOfGraph(int current, ArrayList<ArrayList<Integer>> adj,boolean visited[],ArrayList<Integer> al){
        visited[current] = true;
        al.add(current);
        
        for(int i=0;i<adj.get(current).size();i++){
            
            if(!visited[adj.get(current).get(i)]){
                dfsOfGraph(adj.get(current).get(i),adj,visited,al);
            }
        }
        
    }
    
}
