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
    int res=INT_MIN;
    void sol(TreeNode * root,int mi,int ma){
        if(root==NULL) return;
        res=max(res,max(abs(root->val-mi),abs(root->val-ma)));
        sol(root->left,min(mi,root->val),max(ma,root->val));
        sol(root->right,min(mi,root->val),max(ma,root->val));
    }
    int maxAncestorDiff(TreeNode* root) {
        sol(root,root->val,root->val);
        return res;
    }
};