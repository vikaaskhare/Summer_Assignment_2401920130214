/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    using node=ListNode;
    bool totoise_and_hare(node* head)
    {
        //node* temp=head;
        node* fast=head;
        node*slow=head;
        if(head==NULL||head->next==NULL)
        return false;
        while(fast != nullptr && fast->next != nullptr)
        {
            
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            return true;
        }
        return false;
    }

    bool hasCycle(ListNode *head) {
        return totoise_and_hare(head);

    }
};