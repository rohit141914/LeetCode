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
    int search(vector<int> v,int a,int b,int c){
        for(int i=a;i<=b;i++){
            if(v[i]==c){
                return i;
            }
        }
        return -1;
    }
         int idx=0;
    TreeNode* tree(vector<int>& pr, vector<int>& in,int s,int e){
        if(s>e){
            return NULL;
        }
        int curr=pr[idx];
        idx++;

        TreeNode* temp=new TreeNode(curr);
        if(s==e){
            return temp;
        }
        int po=search(in,s,e,curr);
        temp->left=tree(pr,in,s,po-1);
        temp->right=tree(pr,in,po+1,e);
        return temp;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return tree(preorder,inorder,0,inorder.size()-1);
    }
};