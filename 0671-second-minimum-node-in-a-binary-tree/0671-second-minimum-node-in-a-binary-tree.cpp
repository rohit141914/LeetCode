/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL) return -1;
        queue<TreeNode*>q;
        q.push(root);
        int l;
        TreeNode* curr=NULL;

        long a=long(INT_MAX)+100;
        long b=long(INT_MAX)+100;
        while(q.empty()==false){
            l=q.size();
            for(int i=0;i<l;i++){
                curr=q.front();
                q.pop();
                if(a==INT_MAX){
                    a=curr->val;
                }
                else if(curr->val<a){
                    b=a;
                    a=curr->val;
                }
                else if (curr->val>a&&curr->val<b){
                    b=curr->val;
                }
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
        }
        if(a==long(INT_MAX)+100 ||b==long(INT_MAX)+100) return -1;
        return b;
    }
};