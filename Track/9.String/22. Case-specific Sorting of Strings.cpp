class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
{
    // your code here
    string lower="";
    string upper="";
    string pattern;
    for(auto i : str)
    {
        if(i>='A' and i<='Z')
        {
            upper+=i;
            pattern+='#';
        }
        else if(i>='a' and i<='z')
        {
            lower+=i;
            pattern+='.';
        }
    }

    //cout<<pattern;
    sort(lower.begin(),lower.end());
    sort(upper.begin(),upper.end());
    int u=-1, v=-1;
    for(int i=0;i<n;i++)
    {
        if(pattern[i]=='.')
        {
            pattern[i]=lower[++u];
        }
        else
        {
            pattern[i]=upper[++v];
        }

    }

return pattern;
}
};
