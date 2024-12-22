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
    TreeNode* replaceValueInTree(TreeNode* root) {
        unordered_map<int,int>mp;
        queue<TreeNode*>q;
        queue<int>re;
        q.push(root);
        while(q.empty()==false){
            int c=0;
            int l=q.size();
            for(int i=0;i<l;i++){
                TreeNode *curr=q.front();
                q.pop();
                c+=curr->val;
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            re.push(c);
        }
        re.pop();
        q.push(root);
        root->val=0;
        while(q.empty()==false){
            // re.pop();
            int l=q.size();
            for(int i=0;i<l;i++){
                int c=re.front();
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                    c-=curr->left->val;
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                    c-=curr->right->val;
                }
                if(curr->left!=NULL){
                    curr->left->val=c;
                }
                if(curr->right!=NULL){
                    curr->right->val=c;
                }
            }
            re.pop();
            // re.push(c);
        }

        return root;
    }
};