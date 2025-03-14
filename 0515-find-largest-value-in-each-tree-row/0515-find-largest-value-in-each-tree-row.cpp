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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
         if(root == NULL){
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false){
            int ln=q.size();
            int ans=INT_MIN;
            for(int i=0;i<ln;i++){
            TreeNode *curr=q.front();
            q.pop();
            ans=max(ans,curr->val);
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
            }
            v.push_back(ans);

        }
        return v;
    }
};