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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        ListNode * ans=new ListNode(1);
        ListNode *res=ans;
        while(l1!=NULL || l2!=NULL){
            if(l2==NULL){
                l1->val=l1->val+c;
                if(l1->val>=10){
                    l1->val=l1->val%10;
                    c=1;}
                else{c=0;}
                ans->next=l1;
                ans=l1;
                l1=l1->next;
                continue;
            }
            if(l1==NULL){
                l2->val=l2->val+c;
            if(l2->val>=10){
                    l2->val=l2->val%10;
                    c=1;}
                else{c=0;}
                ans->next=l2;
                ans=l2;
                l2=l2->next;
                continue;
            }
            int v=l1->val+l2->val+c;
            if(v>=10){
                v=v%10;
                c=1;
            }
            else{c=0;}
            ListNode *temp=new ListNode(v);
            ans->next=temp;
            ans=temp;
            l1=l1->next;
            l2=l2->next;
        }
        if(c==1){
            ListNode *la=new ListNode(1);
        ans->next=la;
        }
        return res->next;
    }
};