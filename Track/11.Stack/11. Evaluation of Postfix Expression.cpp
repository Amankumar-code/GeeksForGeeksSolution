class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
{
    stack<int>num;
    
    for(auto ch : S)
    {
        if(isdigit(ch))
        {
            num.push(ch-'0');
        }
        else
        {
            int one = num.top();
            num.pop();
            int two = num.top();
            num.pop();
            if(ch=='+') num.push(two+one);
            if(ch=='-') num.push(two-one);
            if(ch=='*') num.push(two*one);
            if(ch=='/') num.push(two/one);
            
            
        }
        //cout<<num.top()<<endl;
    }
    return num.top();
}

};
