class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int ans;

int maxDepthPerNode(Node* root) {
    if (root == NULL)
        return 0;

    int maxDepthLeft = maxDepthPerNode(root->left);
    int maxDepthRight = maxDepthPerNode(root->right);

    ans = max(ans, maxDepthLeft + maxDepthRight + 1);
    return max(maxDepthLeft, maxDepthRight) + 1;
}

int diameter(Node* root) {
    ans = 0;
    maxDepthPerNode(root);
    return ans;
}
};
