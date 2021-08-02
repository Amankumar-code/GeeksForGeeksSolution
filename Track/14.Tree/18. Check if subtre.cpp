class Solution
{
  public:
    
   void preorder(Node* root, vector<int> &a) {
    if (root != NULL) {
        a.push_back(root -> data);
        preorder(root -> left, a);
        preorder(root -> right, a);
    }
    else
    a.push_back(-1);
}
void inorder(Node* root, vector<int> &a) {
    if (root != NULL) {
        inorder(root -> left, a);        
        a.push_back(root -> data);
        inorder(root -> right, a);
    }
    else
    a.push_back(-1);
}

vector<int> kmp(vector<int>& text, vector<int>& pat)
{
    vector<int> ans;
    int n = text.size(), m = pat.size();
    vector<int> lps(m, 0);
    int j = 0;
    int k = 0;
    for (int i = 1; i <= m - 1; ++i)
    {
        while ( j > 0 && pat[i] != pat[j] )
            j = lps[j - 1];
        if ( pat[i] == pat[j] )
            lps[i] = ++j;
    }
    j = 0;
    for (int i = 0; i < n; ++i)
    {
        while ( j > 0 && pat[j] != text[i] )
            j = lps[j - 1];
        if ( pat[j] == text[i] )
        {
            j++;
            if ( j == m )
            {
                j = lps[j - 1];
                ans.push_back(i - m + 1);
            }
        }
    }
    return ans;
}

bool isSubTree(Node* t, Node* s) {
    vector<int> pre1,in1,pre2,in2;
    preorder(t, pre1);
    preorder(s, pre2);
    inorder(t, in1);
    inorder(s, in2);
    auto v1 = kmp(pre1, pre2), v2 = kmp(in1, in2);
    return (v1.empty() or v2.empty()) ? 0 : 1;
}
};
