struct cell
    {
        int x,y;
        int dis;
        //cell() {}
        cell(int x,int y,int dis)
        :x(x),y(y),dis(dis)
        {
            
        }
        
    }t(0,0,0);
 
class Solution 
{
    public:
    
    
    bool is(int x,int y,int N)
    {
        if(x>=1&&x<=N&&y>=1&&y<=N)
        return true;
        
        return false;
    }
    int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
    {
        int dx[]={-2,-1,1,2,-2,-1,1,2};
        int dy[]={-1,-2,-2,-1,1,2,2,1};
        queue<cell> q;
        q.push(cell(KnightPos[0],KnightPos[1],0));
        
        int x,y;
        bool visit[N+1][N+1];
       
        for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
        {
            visit[i][j]=false;
        }
        visit[KnightPos[0]][KnightPos[1]] = true;
        while(!q.empty())
        {
            t=q.front();
            q.pop();
            
            if(t.x==TargetPos[0]&&t.y==TargetPos[1])
            return t.dis;
            
            for(int i=0;i<8;i++)
            {
                x=t.x+dx[i];
                y=t.y+dy[i];
                
            if(is(x,y,N)&&!visit[x][y])
            {
                visit[x][y]=true;
                q.push(cell(x,y,t.dis+1));
            }
            }
        }
    }
};
