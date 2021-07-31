class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string res = ""; // result
  
    // store all characters of s2 in map
    unordered_map<char, int> m;
    for (int i = 0; i < s2.size(); i++)
        m[s2[i]] = 1;
  
    // Find characters of s1 that are not
    // present in s2 and append to result
    for (int i = 0; i < s1.size(); i++) {
        if (m.find(s1[i]) == m.end())
            res += s1[i];
        else
            m[s1[i]] = 2;
    }
  
    // Find characters of s2 that are not
    // present in s1.
    for (int i = 0; i < s2.size(); i++)
        if (m[s2[i]] == 1)
            res += s2[i];
            
            if(res==""){
                return "-1";
            }else{
    return res;
            }
    }

};
