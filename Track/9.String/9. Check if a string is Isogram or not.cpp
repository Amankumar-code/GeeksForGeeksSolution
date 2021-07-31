class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        map<char, int> m;
    for(auto i: s){
        m[i]++;
    }
    for(auto i:m){
        if(i.second>1) return false;
    }
return true;
    }
};
