class Solution
{
    //Function to insert a node in a BST.
    static Node insert(Node root, int key) {
		if(root == null) return null;
		
		if(key < root.data) {
			if(root.left == null) root.left = new Node(key);
			else insert(root.left, key);
		}
		else if(key > root.data) {
			if(root.right == null) root.right = new Node(key);
			else insert(root.right, key);
		}
		return root;
	}
}
