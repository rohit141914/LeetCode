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
    vector<vector<int>>res;
    void sol(TreeNode*root,vector<int>arr,int t){
        if(root==NULL) return;
        arr.push_back(root->val);
        if(!root->left && !root->right && root->val==t )res.push_back(arr);
        sol(root->left,arr,t-root->val);
        sol(root->right,arr,t-root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>arr;
        sol(root,arr,targetSum);
        return res;
    }
};