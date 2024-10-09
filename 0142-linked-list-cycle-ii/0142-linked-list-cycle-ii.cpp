/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* sl=head;
        ListNode* fa=head;
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        if(head->next==head){
            return head;
        }

        while(fa!=NULL&& fa->next&& fa->next->next){
            sl=sl->next;
            fa=fa->next->next;
            if(sl==fa){
            sl=head;
            while(sl!=fa){
            sl=sl->next;
            fa=fa->next;
            }
            return sl;
            }
        }
            return NULL;
    }
};