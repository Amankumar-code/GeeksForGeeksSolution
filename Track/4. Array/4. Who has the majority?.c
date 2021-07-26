int majorityWins(int arr[], int n, int x, int y) {
 
    // code here
    
    int countX=0;
    int countY=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            countX++;
        }else if(arr[i]==y){
            countY++;
        }
    }
    
    if(countX>countY){
        return x;
    }else if(countX==countY){
        if(x<y){
            return x;
        }else{
            return y;
        }
    }else{
        return y;
    }
    
}
