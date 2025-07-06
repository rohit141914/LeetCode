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
    ListNode* reverseKGroup(ListNode* head, int k) {
        bool firstgrp=true;
        ListNode *currfir=NULL;
        ListNode *pretail=NULL;
        int c=0;
        ListNode *curr=head;
        while(curr!=NULL){
            ListNode *du=curr;
            int c=0;
            for(int i=0;i<k && du!=NULL;i++){
                du=du->next;
                c++;
            }
            if(c<k) break;

            ListNode *p=NULL;
            ListNode *currGrpTail=curr;
            for(int i=0; i<k && curr!=NULL; i++){
                if(i==0){
                    currfir=curr;
                }
                ListNode *ne=curr->next;
                curr->next=p;
                p=curr;
                curr=ne;
            }
            if(firstgrp){
                head=p;
                firstgrp=false;
            }
            else{
                pretail->next=p;
            }
            pretail=currGrpTail;
        }
        if(curr){
            pretail->next=curr;
        }
        return head;
    }
};