/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode dummy(0);
        ListNode* ptr=&dummy;
        while(temp!=nullptr){
            if(temp==head){
                ptr->next=head;
                ptr=ptr->next;
            }
            else{
                if(temp->val!=ptr->val){
                    ptr->next=temp;
                    ptr=ptr->next;
                }
            }
            temp=temp->next;
        }
        ptr->next=nullptr;
        return dummy.next;
    }
};