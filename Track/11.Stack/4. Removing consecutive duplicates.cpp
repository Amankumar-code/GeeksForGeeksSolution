class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string str)
{
    // Your code here
    string ans="";
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {

        if(s.empty() || s.top()!=str[i])
        s.push(str[i]);

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
