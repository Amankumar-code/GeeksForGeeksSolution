vector <int> zigZagTraversal(Node* root)
{
    vector<int> zz;

	if (root == NULL)
	    return zz;

    int direction = 1;

    stack<Node *> currLevel;
    currLevel.push(root);

    stack<Node *> nextLevel;

    while (!currLevel.empty()) {

        Node *temp = currLevel.top();
        currLevel.pop();

        if (temp) {

            zz.emplace_back(temp -> data);

            if (direction) {
                if (temp -> left) nextLevel.push(temp -> left);
                if (temp -> right) nextLevel.push(temp -> right);
            }
            else {
                if (temp -> right) nextLevel.push(temp -> right);
                if (temp -> left) nextLevel.push(temp -> left);
            }
        }

        if (currLevel.empty()) {
            swap(currLevel, nextLevel);
            direction = 1 - direction;
        }
    }

    return zz;
}
