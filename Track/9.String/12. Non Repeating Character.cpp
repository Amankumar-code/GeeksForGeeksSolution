class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string str)
{
    unordered_map<char, int> m;
    
    for(int i=0;i<str.length();i++){
        m[str[i]]++;
    }
    
    for(int i=0;i<str.length();i++){
        if(m[str[i]] == 1){
            return str[i];
        }
    }
    
    return '$';
}

};
