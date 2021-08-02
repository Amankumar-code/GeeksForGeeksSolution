int minValue(Node* node)
{
    // Code here
    struct Node* current = node;
 
/* loop down to find the leftmost leaf */
while (current->left != NULL)
{
    current = current->left;
}
return(current->data);
}
