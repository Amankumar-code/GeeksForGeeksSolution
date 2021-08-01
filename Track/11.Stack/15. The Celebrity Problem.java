class Solution
{ 
    int celebrity(int M[][], int n)
    {
        Stack<Integer> candidates = new Stack<>();
        for(int i=0;i<n;i++)
            candidates.push(i);
            
        while(candidates.size()>=2){
            int can1 = candidates.pop();
            int can2 = candidates.pop();
            
            if(M[can1][can2]==1)
                candidates.push(can2);
            else
                candidates.push(can1);
        }
        
        int potnCandidate = candidates.pop();
        
        for(int i=0;i<n;i++){
            if(i!=potnCandidate)
                if(M[potnCandidate][i]==1 || M[i][potnCandidate]==0)
                    return -1;
        }
        return potnCandidate;
    }
}
