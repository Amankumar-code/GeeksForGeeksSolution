class Solution
{
    
    public:
    struct mycmp{
      bool operator()(pair<int,int> p1,pair<int,int> p2){
          if(p1.second==p2.second){
              return p1.first>p2.first;
          }
          return p1.second<p2.second;;
      }
    };
    int kMostFrequent(int arr[], int n, int k) 
    { 
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,mycmp> pq(m.begin(),m.end());
        for(int i=0;i<k;i++){
            sum=sum + pq.top().second;
            pq.pop();
        }
        return sum;
    } 
};
