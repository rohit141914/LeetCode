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
    int sol(vector<int>arr){
        int idx=0;
        int mi=0;
        int count=0;
        int l=arr.size();
        for(int i=0;i<l-1;i++){
            mi=arr[i];
            idx=i;
            for(int j=i+1;j<l;j++){
                if(arr[j]<mi){
                    idx=j;
                    mi=arr[j];
                }
            }
            if(mi!=arr[i]){
                swap(arr[i],arr[idx]);
                count++;
            }
        }
        return count;
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>t;
        int ans=0;
        while(q.empty()==false){
            int l=q.size();
            t.clear();
            int c=0;
            for(int i=0;i<l;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                    t.push_back(curr->left->val);
                }
                if(curr->right){
                    q.push(curr->right);
                    t.push_back(curr->right->val);
                }
            }
            ans+=sol(t);
        }
        return ans;
    }
};