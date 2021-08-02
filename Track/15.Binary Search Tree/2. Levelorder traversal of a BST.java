class Solution {
    // Function to return the level order traversal of a BST.
    static ArrayList<Integer> levelOrder(Node root) {
        // code here
        
        ArrayList<Integer> output = new ArrayList<>();
		if (root == null) return output;

		Queue<Node> queue = new LinkedList<>();
		queue.add(root);

		while(!queue.isEmpty()) {
			Node currNode = queue.poll();
			output.add(currNode.data);

			if(currNode.left  != null) queue.add(currNode.left);
			if(currNode.right != null) queue.add(currNode.right);
		}
		return output;
    }
}
