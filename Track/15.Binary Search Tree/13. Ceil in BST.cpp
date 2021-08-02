int findCeil(Node* root, int x) 
{  
    if(root==NULL)
    return -1;
    int res=-1;
    while(root!=NULL)
    {
        if(root->data==x)
        return root->data;
        else if(root->data<x)
        root=root->right;
        else
        {
            res=root->data;
            root=root->left;
        }
    }
    return res;
} 
