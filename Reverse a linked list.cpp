class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
       if(head==NULL || head->next==NULL)
       {
       return head;
       }
       Node*prev=NULL;
       Node*cur=head;
       Node*forward=NULL;
       while(cur!=NULL)
       {
           forward=cur->next;
           cur->next=prev;
           prev=cur;
           cur=forward;
       }
       return prev;
    }
    
};
