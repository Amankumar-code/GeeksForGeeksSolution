class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n){
    
    int res = n & (n>>1);
    if(res==0)
        return true;
    return false;
    
}
int main()
{
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  if(isSparse(n))
    cout<<"1"<<endl;
   else
    cout<<"0"<<endl;
 }
 return 0;
 }
};
