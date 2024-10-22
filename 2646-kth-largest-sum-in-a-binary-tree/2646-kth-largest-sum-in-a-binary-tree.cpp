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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> temp;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int ln=q.size();
            long long sum=0;
            for(int i=0;i<ln;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
                sum=sum+curr->val;
            }
            temp.push_back(sum);
        }
        sort(temp.begin(), temp.end(),greater<long long>());
        if(k>temp.size()){
            return -1;
        }
        return temp[k-1];
    }
};