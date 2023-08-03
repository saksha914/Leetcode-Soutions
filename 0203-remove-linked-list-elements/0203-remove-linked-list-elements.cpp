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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode* temp= new ListNode();
        ListNode* dummy=temp;
        temp->next=head;
        while(temp!=NULL and temp->next!=NULL){
            if(temp->next->val==val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};