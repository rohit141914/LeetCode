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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        if(head==NULL){
            return ans;
        }
        int rs=0;
        int re=m-1;
        int cs=0;
        int ce=n-1;
        // ListNode*curr=head;
        while(head && (rs<=re) && (cs<=ce)){
            for(int i=cs;i<=ce;i++){
                ans[rs][i]=head->val;
                head=head->next;
                if(head==NULL){
                    break;
                }
            }
            if(head==NULL){
                    break;
                }
            rs++;
            for(int i=rs;i<=re;i++){
                ans[i][ce]=head->val;
                head=head->next;
                if(head==NULL){
                    break;
                }
            }
            if(head==NULL){
                    break;
                }
            ce--;
            for(int i=ce;i>=cs;i--){
                ans[re][i]=head->val;
                head=head->next;
            if(head==NULL){
                    break;
                }
            }
            re--;
            if(head==NULL){
                    break;
                }
            for(int i=re;i>=rs;i--){
                ans[i][cs]=head->val;
                head=head->next;
                if(head==NULL){
                    break;
                }
            }
            if(head==NULL){
                    break;
                }
            cs++;
        }
        return ans;
    }
};