class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        struct Node* temp=head;
        int count=0;
        if(head==NULL){
            return 0;
        }else{
            while(temp!=NULL){
                temp=temp->next;
                count++;
            }
        }
        
        return count;
    
    }
};
