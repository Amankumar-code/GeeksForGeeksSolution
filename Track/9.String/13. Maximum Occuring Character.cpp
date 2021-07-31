class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int>count;
        int maxi=INT_MIN;
        for(int i=0;i<str.length();i++)
        {
            count[str[i]]++;
            maxi=max(maxi,count[str[i]]);
        }
        for(auto i:count)
        {
            if(i.second==maxi)
            return i.first;
        }
    }


};
