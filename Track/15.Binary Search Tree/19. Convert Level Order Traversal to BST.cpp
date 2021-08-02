Node* getNode(int data)
{
    // Allocate memory
    Node *newNode =
        (Node*)malloc(sizeof(Node));
     
    // put in the data   
    newNode->data = data;
    newNode->left = newNode->right = NULL;   
    return newNode;
}
 
 
// function to construct a BST from
// its level order traversal
Node *LevelOrder(Node *root , int data)
{
     if(root==NULL){   
        root = getNode(data);
        return root;
     }
     if(data <= root->data)
     root->left = LevelOrder(root->left, data);
     else
     root->right = LevelOrder(root->right, data);
     return root;    
}

Node* constructBst(int arr[], int n)
{
    // Code here
    
    if(n==0)return NULL;
    Node *root =NULL;
 
    for(int i=0;i<n;i++)
    root = LevelOrder(root , arr[i]);
     
    return root;
}
