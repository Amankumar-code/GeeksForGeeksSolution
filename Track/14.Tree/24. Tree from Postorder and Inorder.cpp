int searchNode(int in[], int start, int end, int data) {
    for (int i = start; i <= end; ++i)
        if (in[i] == data)
            return i;
    return -1;
}

Node* helpBuildTree(int in[], int post[], int startIdx, int endIdx, int *postIdx) {

    if (startIdx > endIdx)
        return NULL;

    Node *newNode = new Node(post[*postIdx]);
    --(*postIdx);

    if (startIdx == endIdx)
        return newNode;

    int pos = searchNode(in, startIdx, endIdx, newNode -> data);

    newNode -> right = helpBuildTree(in, post, pos + 1, endIdx, postIdx);
    newNode -> left = helpBuildTree(in, post, startIdx, pos - 1, postIdx);

    return newNode;
}

Node *buildTree(int in[], int post[], int n) {
    int postIdx = n - 1;
    return helpBuildTree(in, post, 0, n - 1, &postIdx);
}
