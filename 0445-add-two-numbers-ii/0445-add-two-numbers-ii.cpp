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
    ListNode* rev(ListNode* &head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* ne=NULL;
        while(curr!=NULL){
            ne=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ne;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        int c=0;
        l1=rev(l1);
        l2=rev(l2);
        ListNode* curr=l1;
        ListNode* curr2=l2;
        int v=0;
        ListNode *temp=new ListNode(c);
        while(curr!=NULL && curr2!=NULL){
            v=curr->val+curr2->val+c;
            curr->val=v%10;
            curr2->val=v%10;
            c=v/10;
            if(curr->next==NULL && curr2->next==NULL){
                if(c==0)return rev(l1);
                temp->val=c;
                curr->next=temp;
                return rev(l1);
            }
            curr=curr->next;
            curr2=curr2->next;
        }
        if(curr==NULL){
            if(c==0)return rev(l2);
            while(curr2!=NULL){
                v=curr2->val+c;
                curr2->val=v%10;
                c=v/10;
                if(c==0)return rev(l2);
                if(curr2->next==NULL){
                    temp->val=c;
                    curr2->next=temp;
                    return rev(l2);
                }
                curr2=curr2->next;
            }
        }
        if(c==0) return rev(l1);
        while(curr!=NULL){
            v=curr->val+c;
            curr->val=v%10;
            c=v/10;
            if(c==0)return rev(l1);
            if(curr->next==NULL){
                temp->val=c;
                curr->next=temp;
                return rev(l1);
            }
            curr=curr->next;
        }
        return NULL;
    }
};