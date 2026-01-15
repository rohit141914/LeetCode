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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1||root==NULL){
            TreeNode* newroot=new TreeNode(val);
            newroot->left=root;
            return newroot;
        }

        queue<TreeNode*>q;
        q.push(root);
        TreeNode* curr=NULL;
        int l;
        bool done=false;
        while(q.empty()==false){
            l=q.size();
            depth--;
            for(int i=0;i<l;i++){
                curr=q.front();
                q.pop();
                if(depth==1){
                    TreeNode* fi=new TreeNode(val);
                    TreeNode* se=new TreeNode(val);
                    if(curr->left !=NULL){
                        fi->left=curr->left;
                    }
                    if(curr->right !=NULL){
                        se->right=curr->right;
                    }
                    curr->left=fi;
                    curr->right=se;
                    done=true;
                }
                if(curr->left !=NULL) q.push(curr->left);
                if(curr->right !=NULL) q.push(curr->right);
            }
            if(done) return root;
        }
        return root;
    }
};