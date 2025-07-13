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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(auto a:nums) st.insert(a);
        if(head==NULL) return head;
        while(head!=NULL&& st.find(head->val)!=st.end()){
            head=head->next;
            if(head==NULL) return NULL;
        }
        ListNode* curr=head;
        ListNode* prev=head;
        while(curr!=NULL){
            if(st.find(curr->val)==st.end()){
                if(curr!=prev){
                    prev->next=curr;
                    prev=curr;
                }
            }
            curr=curr->next;
        }
        prev->next=NULL;
        return head;
    }
};