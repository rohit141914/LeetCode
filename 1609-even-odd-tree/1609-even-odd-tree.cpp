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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL) return false;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *curr=NULL;
        bool even=true;
        int l=0;
        int pre=-1;
        while(q.empty()==false){
            l=q.size();
            pre=-1;
            for(int i=0;i<l;i++){
                curr=q.front();
                q.pop();
                if(even==true){
                    if(i==0&& curr->val%2==0) return false;
                    if(i!=0 && (curr->val%2==0 || pre>=curr->val)) return false;
                }
                if(even==false){
                    if(i==0&& curr->val%2==1) return false;
                    if(i!=0 && (curr->val%2==1 || pre<=curr->val)) return false;
                }
                pre=curr->val;
                if(curr->left !=NULL) q.push(curr->left);
                if(curr->right !=NULL) q.push(curr->right);
            }
            even=!even;
        }
        return true;
    }
};