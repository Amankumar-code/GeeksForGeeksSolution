class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string c, string d){
     if(c.length()!=d.length())
    return false;
    
    int count[256]={0};
    for(int i=0;i<c.length();i++){
        count[c[i]]++;
        
    }
    for(int i=0;i<d.length();i++){
        count[d[i]]--;
    }
    for(int i=0;i<c.length();i++)
    if(count[c[i]]!=0)
    return false;
    
    return true;
    // Your code here
    
}

};
