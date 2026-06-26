class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* ahead=head->next;
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=ahead;
           if(ahead) ahead=ahead->next;
        }
        return prev;
    }
};