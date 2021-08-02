Node *getSuc(Node *root)
{
    Node *curr=root->right; 
    while(curr->left!=NULL)
    curr=curr->left;
    return curr;
}
Node *deleteNode(Node *root,  int X)
{
    if(root==NULL)
    return root;
    if(X>root->data)
    root->right=deleteNode(root->right,X);
    else if(X<root->data)
    root->left=deleteNode(root->left,X);
    else
    {
        if(root->left==NULL)
        {
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ=getSuc(root);
            root->data=succ->data;
            root->right=deleteNode(root->right,succ->data);//why succ-> right you need to call for root->right
        }
        return root;
    }
    
    
}
