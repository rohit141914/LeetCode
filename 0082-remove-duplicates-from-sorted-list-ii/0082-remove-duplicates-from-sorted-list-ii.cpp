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
        if(head==NULL||head->next==NULL) return head;
        ListNode* du=new ListNode(0);
        du->next=head;
        ListNode *curr=head;
        ListNode *pre_corr=du;
        while(curr!=NULL &&curr->next!=NULL){
            bool dup=false;
            while(curr!=NULL&&curr->next!=NULL){
                if(curr->val==curr->next->val){
                    dup=true;
                    curr=curr->next;
                }
                else{
                    break;
                }
            }
            if(dup==true){
                pre_corr->next=curr->next;
            }
            else{
                pre_corr=pre_corr->next;
            }
            curr=curr->next;
        }
        return du->next;
    }
};