struct myCmp
    {
        bool operator() (pair<int,int> &p1,pair<int,int> &p2)
        {
        return (p1.second > p2.second);
        }
    };
class Solution
{
	public:
	int spanningTree(int V, vector<vector<int>> adj[]) {
        
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
        pq.push({0,0});
        unordered_set<int> visited;
        int total_cost=0;
        while(!pq.empty()){
            pair<int,int> u=pq.top();
            pq.pop();
            int node=u.second;
            if(visited.count(node)) continue;
            visited.insert(node);
            total_cost+=u.first;
            for(auto v:adj[node]){
                int neighbour=v[0];
                if(visited.count(neighbour)) continue;
                pq.push({v[1],v[0]});
            }
        }
        return total_cost;
    }
};
