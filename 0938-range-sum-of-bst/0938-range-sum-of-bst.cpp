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
    int res=0;
    void dfs(TreeNode* root, int l,int h){
        if(root==NULL) return;
        if(root->val>=l && root->val<=h)res+=root->val;
        dfs(root->left,l,h);
        dfs(root->right,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        dfs(root,low,high);
        return res;
    }
};