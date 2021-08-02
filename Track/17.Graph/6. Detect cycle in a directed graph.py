class Solution:
    
    def bfs(self,adj, s, vis,  mil):
        
        vis[s] = True
        mil[s] = True
        for u in adj[s]:
            if not vis[u]:
                
                if self.bfs(adj,u,vis,mil):
                    return True
            elif mil[u]:
                return True
                
        mil[s] = False
            
            
        return False
                
        
    def isCyclic(self, V, adj):
        
        vis = [False]*V
        for v in range(V):
            if not vis[v]:
                mil = [False]*V
                
                if self.bfs(adj,v,vis,mil):
                    return True
                    
        return False
