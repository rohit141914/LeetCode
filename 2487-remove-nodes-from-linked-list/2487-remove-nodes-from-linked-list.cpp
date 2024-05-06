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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode*curr=head;
            stack<int> s;

        while(curr){
            if(s.empty()){
                s.push(curr->val);
                curr=curr->next;
                continue;
            }
            if(curr->val>s.top()){
                while(!s.empty()&&curr->val>s.top()){
                    s.pop();
                }
                s.push(curr->val);
                curr=curr->next;
                continue;
            }
            s.push(curr->val);
            curr=curr->next;
        }
        stack<int> t;
        while(!s.empty()){
            t.push(s.top());
            s.pop();
        }
        curr=head;
        while(!t.empty()){
            curr->val=t.top();
            t.pop();
            if(t.size()==0){
                curr->next=NULL;
                continue;
            }
            curr=curr->next;
        }
        return head;
    }
};