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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        deque<TreeNode*>de;
        bool re=true;
        while(q.empty()==false){
            int ln=q.size();
            de.clear();
            for(int i=0;i<ln;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
                if(re){
                    if(curr->left!=NULL){
                    de.push_back(curr->left);
                    }
                    if(curr->right!=NULL){
                    de.push_back(curr->right);
                    }   
                }
            }
        if(re==true){
            while(de.size()>1){
                swap(de.front()->val,de.back()->val);
                de.pop_back();
                de.pop_front();
            }
            re=false;
            continue;
        }
        re=true;
        }
        return root;
    }
};