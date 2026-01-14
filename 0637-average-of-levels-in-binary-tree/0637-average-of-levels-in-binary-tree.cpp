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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<double>ans;
        TreeNode* curr=NULL;
        int l=0;
        double sum=0;
        while(q.empty()==false){
            sum=0;
            l=q.size();
            for(int i=0;i<l;i++){
                curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            ans.push_back(round(double(sum/l)*1e5)/1e5);
        }
        return ans;
    }
};