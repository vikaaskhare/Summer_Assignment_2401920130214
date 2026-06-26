class Solution {
public:
using node = ListNode;
node* middle(node* head)
{
    node* fast=head;
    node*slow=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    //reverse from slow->next;
}
node * reverse(node* slow)
{
    node* prev=NULL;
    node* curr=slow;
    node* ahead=slow->next;
    while(curr!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=ahead;
       if(ahead) ahead=ahead->next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
        return true;
        node* mid=middle(head);
        node* revhead=reverse(mid->next);
        mid->next=revhead;
        //check palindrome
        while(head!=NULL&&revhead!=NULL)
        {
            if(revhead->val==head->val)
            {
                revhead=revhead->next;
                head=head->next;
            }
            else
            return false;
        }
        return true;
    }
};