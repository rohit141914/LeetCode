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
    struct compare{
        bool operator()(pair<int,ListNode*> &a,pair<int,ListNode*>&b){
        return a.first>b.first;
    }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=NULL;
        ListNode *prev=NULL;
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,compare>p;
        for(auto a:lists){
            if(a!=NULL){
            p.push({a->val,a});
            }
        }
        // for(auto a:)
        pair<int,ListNode*>t;
        while(p.size()!=0){
            t=p.top();
            p.pop();
            if(head==NULL){
                head=t.second;
                prev=head;
            }
            else{
                prev->next=t.second;
                prev=t.second;
            }
            if(t.second->next!=NULL){
                p.push({t.second->next->val,t.second->next});
            }
        }
       return head; 
    }
};