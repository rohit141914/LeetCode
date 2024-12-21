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
    bool isCousins(TreeNode* root, int x, int y) {
         if(root == NULL){
            return false;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false){
            int ln=q.size();
            int c=0;
            for(int i=0;i<ln;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }

                if(curr->left!=NULL&&(curr->left->val==x||curr->left->val==y)){
                     c++;   
                }
                else if(curr->right!=NULL&&(curr->right->val==x||curr->right->val==y)){
                     c++;   
                }
            }
            if(c==2){
                return true;
            }
        }
        return false;
    }
};