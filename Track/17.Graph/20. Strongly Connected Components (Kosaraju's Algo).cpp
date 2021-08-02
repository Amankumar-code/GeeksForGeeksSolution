class Solution
{
    public:
    void dfs(vector<bool>& visited, vector<int> adj[], int x, stack<int>& st){
        visited[x]=true;
        for(int i = 0 ; i < adj[x].size() ; i++){
            if(!visited[adj[x][i]])
            { 
                dfs(visited, adj, adj[x][i], st);   
            }
        }
        st.push(x);
    }
    void dfs2(vector<bool>& visited, vector<vector<int>>& adj, int x){
        visited[x]=true;
        for(int i = 0 ; i < adj[x].size() ; i++)
        {
            if(!visited[adj[x][i]]){                 
                dfs2(visited, adj, adj[x][i]);       
            }
        }
    }
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int> st;
        vector<bool> visited(V, false);
        for(int i = 0 ; i < V; i++){
            if(!visited[i]){
                dfs(visited, adj, i, st);
            }
        }
  
        vector<int> order;
        while(!st.empty()){
            order.push_back(st.top());
            st.pop();
        }
        vector<vector<int>> trans;
        for(int i = 0 ; i < V ; i++){
            vector<int> temp;
            temp.push_back(i);
            trans.push_back(temp);
        }
        for(int i = 0 ; i < V ; i++){
            for(int j = 0 ; j < adj[i].size() ; j++){
                trans[adj[i][j]].push_back(i);
            }
        }

        int cnt=0;
        vector<bool> visit(V, false);
        for(int i = 0 ; i < V; i++){
            if(!visit[order[i]]){
                dfs2(visit, trans, order[i]);
                cnt++;
            }
        }
        return cnt;
    }
};
