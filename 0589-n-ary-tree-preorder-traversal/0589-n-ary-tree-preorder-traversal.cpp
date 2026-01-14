/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;
    void sol(Node* root){
        vector<Node *>t;
        int l=0;
        if(root!=NULL){
            ans.push_back(root->val);
            t=root->children;
            l=t.size();
            for(int i=0;i<l;i++){
                sol(t[i]);
            }
        }
    }
    vector<int> preorder(Node* root) {
         sol(root);
         return ans;
    }
};