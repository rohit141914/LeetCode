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
    vector<string>res;
    void dfs(TreeNode* root, string st){
        if(root==NULL) return;
        if(!root->left && !root->right){
            st+=to_string(root->val);
            res.push_back(st);
        }
        st+=to_string(root->val);
        st+="->";
        dfs(root->left, st);
        dfs(root->right,st);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,"");
        return res;
    }
};