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

    // void sol(TreeNode* root,int ht){

    // }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        queue<pair<TreeNode*,int>>q;
        map<int,vector<int>>mp;
        vector<vector<int>>ans;
        q.push({root,0});
        multimap<int,int>m2;
        while(q.empty()!=true){
            int ln=q.size();
                m2.clear();
            for(int i=0;i<ln;i++){
                auto curr=q.front();
                q.pop();
                if(curr.first->left){
                    q.push({curr.first->left,curr.second-1});
                }
                if(curr.first->right){
                    q.push({curr.first->right,curr.second+1});
                }
                m2.insert({curr.first->val,curr.second});
            }
            for(auto x:m2){
                mp[x.second].push_back(x.first);
            }
        }
        for(auto x:mp){
                ans.push_back(x.second);
        }
        return ans;

    }
};