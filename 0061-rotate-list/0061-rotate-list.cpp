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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *curr=head;
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        int c=1;
        while(curr->next!=NULL){
            c++;
            curr=curr->next;
        }
        k=k%c;
        k=c-k;
        curr->next=head;
        curr=head;
        int c2=c;
        while((k-1)>0){
            curr=curr->next;
            k--;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};