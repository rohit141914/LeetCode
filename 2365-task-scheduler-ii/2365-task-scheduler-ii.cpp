class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, long long space) {
        unordered_map<int,long long>mp;
        long long j=1;
        int l=tasks.size();
        for(int i=0;i<l;i++){
            if(mp[tasks[i]]==0){
                mp[tasks[i]]=j;
                j++;
            }
            else{
                if(j-mp[tasks[i]]<=space){
                    j+=space-(j-mp[tasks[i]])+1;
                }
                    mp[tasks[i]]=j;
                    j++;
                }
            }
        return j-1;
    }
};