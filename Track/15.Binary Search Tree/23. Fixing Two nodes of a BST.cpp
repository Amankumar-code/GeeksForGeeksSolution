class Solution {
public:
    
    void swap( int* a, int* b )
{
    int t = *a;
    *a = *b;
    *b = t;
}


    void correctBSTUtil( struct Node* root, struct Node** first, 
                     struct Node** middle, struct Node** last, 
                     struct Node** prev ) 
{ 
    if( root ) 
    { 
        correctBSTUtil( root->left, first, middle, last, prev ); 
        if (*prev && root->data < (*prev)->data) 
        { 
            if ( !*first ) 
            { 
                *first = *prev; 
                *middle = root; 
            } 
            else
                *last = root; 
        } 
        *prev = root; 
        correctBSTUtil( root->right, first, middle, last, prev ); 
    } 
} 

struct Node *correctBST( struct Node* root )
{
   struct Node *first, *last, *prev, *middle;
   first=last=prev=middle=NULL;
   
   correctBSTUtil( root, &first, &middle, &last, &prev ); 
   
   if( first && last ) 
        swap( &(first->data), &(last->data) ); 
    else if( first && middle )  
        swap( &(first->data), &(middle->data) );
return root;
}
};
