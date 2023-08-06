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
    void reverse(ListNode* s,ListNode* e){
        ListNode* curr=s,*prev=NULL,*nt=s->next;
        while(prev!=e){
                curr->next=prev;
                prev=curr;
                curr=nt;
                if(nt!=NULL)
                        nt=nt->next;
                
        }
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1 or head==NULL or head->next==NULL ) return head;
        ListNode* start=head;
        ListNode* end=head;
        int cnt=k-1;
        while(cnt--){
            end=end->next;
            if(end==NULL)
                    return head;
        }
        ListNode* temp=reverseKGroup(end->next,k);
        reverse(start,end);
        start->next=temp;
        return end;
        
    }
};