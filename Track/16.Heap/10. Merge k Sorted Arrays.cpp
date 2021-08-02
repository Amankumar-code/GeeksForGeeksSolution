#define vi vector<int>
struct comap 
{
    bool operator()(vi  p1, vi  p2)
    {
        return p1[0] > p2[0];
    }
};
vi solve(vector<vi> &arr,int K){
	priority_queue<vi, vector<vi>, comap> pq;
	for(int i=0;i<K;i++){
		pq.push(vi {arr[i][0],i,0});
	}
	int count = 0;
	vi ret;
	while(count != K*K){
		vi m = pq.top();
		ret.push_back(m[0]);
		count++;
		pq.pop();
		int c = m[2];
		if(c < K-1)
		{
			pq.push(vi {arr[m[1]][c+1],m[1],c+1});
		}
	}
	return ret;
}

class Solution
{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        return solve(arr,K);
        
    }
};
