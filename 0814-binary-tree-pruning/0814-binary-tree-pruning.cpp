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
    bool sol(TreeNode * root){
        if(root==NULL) return false;
        bool le=sol(root->left);
        bool ri=sol(root->right);
        if(!le) root->left=NULL;
        if(!ri) root->right=NULL;
        return root->val==1 || le || ri;
    }
    TreeNode* pruneTree(TreeNode* root) {
        return sol(root)==true?root:NULL;
    }
};