class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head->next == NULL)
        {
            return head;
        }

        struct Node* newHead = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }

};
