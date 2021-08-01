class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
     string removePair(string str)
{
    string ans = "";
    stack<char>s;

    for(int i=0;i<str.length();i++)
    {
        if(s.empty() or s.top()!=str[i])
        {
            s.push(str[i]);
        }
        else
        {
            while(!s.empty() and s.top()==str[i] )
            {
                s.pop();
            }
        }
    }

    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;

}
};
