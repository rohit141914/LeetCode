class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int>p;
        for(auto a:s){
            p.push(a);
        }
        while(p.size()>1){
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            if(a==b){
                continue;
            }
            p.push(a-b);
        }
        if(p.size()==0){
            return 0;
        }
        return p.top();
    }
};