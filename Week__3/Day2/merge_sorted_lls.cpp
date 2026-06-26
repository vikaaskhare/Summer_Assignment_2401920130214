class Solution {
public:
using node=ListNode;
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1==NULL&&head2==NULL)
        return head1;
        if(head1==NULL)
        return head2;
        if(head2==NULL)
        return head1;

        node* temp1=head1;
        node* temp2=head2;
        //dummy node
        node* dum=new node(200);
        node* temp=dum;
        
        //attach dummynode
        if(temp1->val<=temp2->val)
        dum->next=temp1;
        else
        dum->next=temp2;


        while(temp1!=NULL&&temp2!=NULL)
        {
            if(temp1->val<=temp2->val)
            {
            temp->next=temp1;
            temp1=temp1->next;
            }
            else
            {
                temp->next=temp2;
              temp2=temp2->next;
            }
            temp=temp->next;
        }
        if (temp1 != NULL) {
            temp->next = temp1;
        } else {
            temp->next = temp2;
        }
        return dum->next;


    }
};