vector<int> findSpiral(Node* root) {
    vector<int> ans;
    if (!root) return ans;
    queue<Node*> q;
    q.push(root);
    int chance = 0;
    while (!q.empty()) {
        int n = q.size();
        vector<int> v;
        while (n--) {
            Node* temp = q.front();
            q.pop();
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
            v.push_back(temp->data);
        }
        chance++ & 1 ? ans.insert(ans.end(), v.begin(), v.end()) : ans.insert(ans.end(), v.rbegin(), v.rend());
    }
    return ans;
}
