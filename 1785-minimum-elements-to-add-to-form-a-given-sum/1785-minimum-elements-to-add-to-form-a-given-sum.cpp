class Solution {
public:
    int minElements(vector<int>& nums, int limit, long long goal) {
     long long sum=0;
     for(auto a: nums){
        sum=sum+a;
     }
     goal=goal-sum;
     goal=abs(goal);
     long long ans=0;
     ans+=goal/limit;
     if(goal%limit==0){
        return ans;
     }
     return ans+1;
    }
};