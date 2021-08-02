bool compare1(vector<int> v1, vector<int> v2)
{
    return v1.front()<v2.front();
}

class Solution
{
    public:
    vector<vector<int>> ans;  
    vector<int> temp;   
    
    void findUtil(vector<int> adj[], stack<int> &st, int index[], int lowlink[], 
                                                        bool onstack[], int i) 
    {
        static int curr = 0;
    
        index[i] = lowlink[i] = ++curr;
        st.push(i);
        
        onstack[i] = 1; 
    
        for (int j = 0; j < adj[i].size(); ++j) 
        {
            if (index[adj[i][j]] == -1)
            { 
                
                findUtil(adj, st, index, lowlink, onstack, adj[i][j]);
                lowlink[i] = min(lowlink[i], lowlink[adj[i][j]]);
            } 
            else if (onstack[adj[i][j]]) 
            { 
                lowlink[i] = min(lowlink[i], index[adj[i][j]]);
            }
        }
        if (lowlink[i] == index[i]) 
        { 
            int w = 0;
            while (!st.empty() && st.top() != i)
            {
                w = (int)st.top();
                temp.push_back(w);
                onstack[w] = 0;
                st.pop();
            }
            w = (int)st.top();
            temp.push_back(w);
            
            ans.push_back(temp);
            temp.clear();
            onstack[w] = 0;
            st.pop();
        }
    }
    vector<vector<int>> tarjans(int V, vector<int> adj[])
    {
        int lowlink[V + 1], index[V + 1];
        bool onstack[V + 1]; 
        
        stack<int> st;
    
        for (int i=0; i<V; ++i) {
            lowlink[i] = -1;
            index[i] = -1;
            onstack[i] = false;
        }
    
        for (int i=0; i<V; ++i) 
        {
            if (index[i] == -1)
            {
                findUtil(adj, st, index, lowlink, onstack, i); 
            }
        }
        
        for(int i=0; i<ans.size(); i++){
            sort(ans[i].begin(),ans[i].end());
        }
        sort(ans.begin(),ans.end(),compare1);
        
        return ans;
    }
};
