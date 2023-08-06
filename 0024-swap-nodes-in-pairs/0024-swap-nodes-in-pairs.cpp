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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr){return nullptr;}

        ListNode *slow=head,*fast=head->next;

        int count=0;

        while(fast!=NULL){
            count++;
            if(count&1){
                swap(slow->val,fast->val);
            }
            slow=slow->next;
            fast=fast->next;
        }

        return head;
    }
};