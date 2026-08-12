/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *newnode,*temp,*head=NULL;
    struct ListNode *temp1=l1,*temp2=l2;
    int carry=0,sum=0;
    while(temp1!=NULL||temp2!=NULL||carry!=0){

        newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        sum=carry;
        if (temp1 != NULL) {
            sum += temp1->val;
            temp1 = temp1->next;
        }

        if (temp2 != NULL) {
            sum += temp2->val;
            temp2 = temp2->next;
        }
        carry=sum/10;
        newnode->val=sum%10;
        if(head==NULL){
            head=newnode;
            temp=head;
            temp->next=NULL;
        }
        else{
            temp->next=newnode;
            temp=newnode;
            temp->next=NULL;
        }
    }
    return head;
}