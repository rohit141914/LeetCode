class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>e;
        priority_queue<int>o;
        string nums=to_string(num);
        for(auto a:nums){
            if((a-'0')%2==0){
                e.push(a-'0');
            }
            else{
                o.push(a-'0');
            }
        }
        int ans=0;
        for(auto a:nums){
            ans=ans*10;
            if((a-'0')%2==0){
                ans+=e.top();
                e.pop();
            }
            else{
                ans+=o.top();
                o.pop();
            }
        }
        return ans;
    }
};