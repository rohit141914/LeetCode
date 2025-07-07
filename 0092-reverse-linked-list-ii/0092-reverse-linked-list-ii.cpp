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
    pair<ListNode*,ListNode*> rev(ListNode* li,int n){
        ListNode *prev=NULL;
        ListNode *curr=li;
        ListNode* next=NULL;
        while(n>=0&&curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            n--;
        }
        return pair{prev,curr};
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head==NULL||head->next==NULL||(left==right))return head;
        ListNode *curr=head;
        ListNode* last=NULL;
        for(int i=1;i<left;i++){
            if(curr!=NULL&&curr->next!=NULL){
                last=curr;
                curr=curr->next;
            }
        }
        // cout<<prev->val;
        pair<ListNode*,ListNode*>p=rev(curr,right-left);
        if(last==NULL){
            head=p.first;
        }
        else{
            last->next=p.first;
        }
        curr->next=p.second;
        return head;
    }
};