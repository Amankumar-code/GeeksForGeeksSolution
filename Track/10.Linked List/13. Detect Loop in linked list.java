class Solution {
    //Function to check if the linked list has a loop.
    public static boolean detectLoop(Node head)
    {
        HashSet<Node> hs = new HashSet<>();
        for(Node curr = head;curr != null;curr = curr.next)
        {
            if(hs.contains(curr))
                return true;
            hs.add(curr);
        }
        return false;
    }
}
