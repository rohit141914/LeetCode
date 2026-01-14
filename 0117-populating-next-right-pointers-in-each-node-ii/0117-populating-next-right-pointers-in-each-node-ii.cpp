/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return root;
        queue< Node*>q;
        q.push(root);
        int l=0;
        Node * pre=NULL;
        Node * top=NULL;
        while(q.empty()==false){
            l=q.size();
            pre=NULL;
            for(int i=0;i<l;i++){
                top=q.front();
                q.pop();
                if(pre!=NULL){
                    pre->next=top;
                }
                pre=top;
                if(top->left!=NULL) q.push(top->left);
                if(top->right!=NULL) q.push(top->right);
            }
            pre->next=NULL;
        }
        return root;
    }
};