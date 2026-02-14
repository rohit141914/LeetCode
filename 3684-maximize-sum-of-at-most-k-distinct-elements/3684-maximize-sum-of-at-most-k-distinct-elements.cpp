class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        unordered_set<int>st;
        int l=nums.size();
        for(int i=0;i<k;i++){
            if(st.find(nums[i])==st.end()){
                p.push(nums[i]);
                st.insert(nums[i]);
            }
        }
        int j=k;
        if(st.size()<k){
            while(st.size()<k && j<l){
                if(st.find(nums[j])==st.end()){
                    p.push(nums[j]);
                    st.insert(nums[j]);
                }
                j++;
            }
        }
        for(int i=j;i<l;i++){
            if(p.top()<nums[i] && st.find(nums[i])==st.end()){
                p.pop();
                p.push(nums[i]);
                st.insert(nums[i]);
            }
        }
        nums.clear();
        while(p.size()>0){
            nums.push_back(p.top());
            p.pop();
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};