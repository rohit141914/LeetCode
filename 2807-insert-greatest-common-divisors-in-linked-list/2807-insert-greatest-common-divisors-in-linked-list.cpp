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

    int hcf(int a,int b){
        if(a==b){
            return a;
        }
        else if(a>b){
            return hcf(a-b,b);
        }
        else{
             return hcf(a,b-a);
        }
        return -1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode*curr=head;
        while(curr&&curr->next){
        int a=hcf(curr->val,curr->next->val);
        ListNode*temp=new ListNode(a);
        ListNode*t2=curr->next;
        temp->next=curr->next;
        curr->next=temp;
        curr=t2;
        }
        return head;
    }
};