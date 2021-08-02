class Solution {
   public:
    //Function to return the lowest common ancestor in a Binary Tree.
    bool util(Node* root, int l, int r) {
        if (!root) return false;

        bool mid = (root->data == l || root->data == r);
        bool left = util(root->left, l, r);
        if (mid && left) {
            ans = root;
            return true;
        }
        bool right = util(root->right, l, r);
        if (mid && right || left && right) {
            ans = root;
            return true;
        }

        return mid || left || right;
    }
    Node* ans;
    Node* lca(Node* root, int n1, int n2) {
        util(root, n1, n2);
        return ans;
    }
};
