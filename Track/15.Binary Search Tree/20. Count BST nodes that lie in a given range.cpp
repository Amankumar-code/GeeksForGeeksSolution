void countUtil(Node *root, int l , int r, int &c){
    if(!root) return;
    if(root->data>=l && root->data<=r) c++;
    countUtil(root->left,l,r,c);
    countUtil(root->right,l,r,c);
    
}

int getCount(Node *root, int l, int h)
{
  // your code goes here   
  int count=0;
    countUtil(root,l,h,count);
return count;
}
