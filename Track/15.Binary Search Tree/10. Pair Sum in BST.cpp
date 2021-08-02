bool findPair(Node* root, int X) 
{
    if(!root)
    return false;
    stack<Node *>it1,it2;
    Node* c=root;
    while(c) 
    {
        it1.push(c); 
        c=c->left;
    }
    c=root;
    while(c) 
    {
        it2.push(c); 
        c=c->right;
    }
    while(it1.top()!=it2.top())
    {
        int v1=it1.top()->data;
        int v2=it2.top()->data;
        if(v1+v2==X)
        return true;
        if(v1+v2<X)
        {
            Node *temp=it1.top()->right;
            it1.pop();
            
            while(temp) 
            {
                it1.push(temp);
                temp=temp->left;
            }
            
            
        }
        else
        {
            Node *temp=it2.top()->left;
            it2.pop();
            
            while(temp) 
            {
                it2.push(temp);
                temp=temp->right;
            }
            
        }
    }
    return false;
}
