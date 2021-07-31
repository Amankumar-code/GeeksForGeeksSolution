class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string str1,string str2)
    {
        if (str1.length() != str2.length()) 
        return false; 
  
        string temp = str1 + str1;  
        return (temp.find(str2) != string::npos); 
    }
};
