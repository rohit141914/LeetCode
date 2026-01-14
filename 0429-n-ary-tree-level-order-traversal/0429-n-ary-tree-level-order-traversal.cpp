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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<Node*>q;
        vector<int>cur_ans;
        Node*curr=NULL;

        q.push(root);
        cur_ans.push_back(root->val);
        ans.push_back(cur_ans);

        int l=0;
        vector<Node*>temp;

        while(q.empty()==false){
            l=q.size();
            cur_ans.clear();
            for(int i=0;i<l;i++){
                curr=q.front();
                temp=curr->children;
                q.pop();

                for(int j=0;j<temp.size();j++){
                    curr=temp[j];
                    if(curr!=NULL){
                        q.push(curr);
                        cur_ans.push_back(curr->val);
                    }
                }
            }
            if(cur_ans.size()>0) ans.push_back(cur_ans);
        }
        return ans;
    }
};