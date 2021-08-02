class Tree {

		
		ArrayList<Integer> inOrder(Node root) {
			ArrayList<Integer> op = new ArrayList<>();
			inorder(root, op);
			return op;
		}

		private void inorder(Node root, ArrayList<Integer> op) {
			if (root == null) return;
			inorder(root.left, op);
			op.add(root.data);
			inorder(root.right, op);
		}

		
		void printInOrderRecursive(Node root) {
			if (root == null) return;
			printInOrderRecursive(root.left);
			System.out.print(root.data+ " ");
			printInOrderRecursive(root.right);
		}

		
		void printInOrderNonRecursive(Node root) {
			if (root == null) return;

			StringBuilder sb = new StringBuilder();
			Stack<Node> stack = new Stack<>();
			Node currNode = root;

			while (currNode != null || !stack.isEmpty()) { 

				while (currNode != null) {	
					stack.push(currNode);
					currNode = currNode.left;
				}

				
				currNode = stack.pop();
				sb.append(currNode.data).append(" ");

				
				currNode = currNode.right;
			}

			System.out.println(sb);
			sb.setLength(0);
		}
}
