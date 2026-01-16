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
    int ans=0;
    int he(TreeNode*root){
        if(root==NULL) return 0;
        int le=he(root->left);
        int ri=he(root->right);
        ans=max(le+ri,ans);
        return max(le,ri)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        he(root);
        return ans;
    }
};