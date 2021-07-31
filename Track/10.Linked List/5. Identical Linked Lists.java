class Solution 
{
    public boolean isIdentical (Node head1, Node head2)
    {
       if(head1 == null && head2 == null)
           return true;
       else if(head1 == null || head2 == null)
           return false;
           
       Node curr1 = head1;
       Node curr2 = head2;
       
       while(curr1 != null && curr2 != null)
       {
           if(curr1.data != curr2.data)
               return false;
           curr1 = curr1.next;
           curr2 = curr2.next;
       }
       if(curr1 == null && curr2 == null)
           return true;
       return false;
   }
}
