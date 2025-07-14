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
    int getDecimalValue(ListNode* head) {
        vector<int> temp;
        ListNode* curr=head;
        while(curr!=NULL){
            temp.push_back(curr->val);
            curr=curr->next;
        }
        int res=0;
        int len=temp.size();
        for(int i=0;i<len;i++){
             res=res+temp[len-1-i]*pow(2,i);
        }
        return res;
    }
};