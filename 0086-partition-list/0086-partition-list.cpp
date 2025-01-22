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
    ListNode* partition(ListNode* head, int x) {
        ListNode * ans=NULL;
        ListNode* anse=NULL;
        ListNode* se=NULL;
        ListNode* see=NULL;
        if(head==NULL){
            return head;
        }
        while(head!=NULL){
            if(head->val<x){
                if(ans==NULL){
                    ans=head;
                    anse=head;
                }
                else{
                    anse->next=head;
                    anse=head;
                }
            }
            else{
                if(se==NULL){
                    se=head;
                    see=head;
                }
                else{
                    see->next=head;
                    see=head;
                }
            }
            head=head->next;
        }
        if(see!=NULL){
        see->next=NULL;
        }
        if(anse!=NULL&&se!=NULL){
            anse->next=se;
        }
        if(ans==NULL){
            return se;
        }
        return ans;
    }
};