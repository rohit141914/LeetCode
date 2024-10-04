class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int l=skill.size();
        int target=skill[0]+skill[l-1];
        long long ans=0;
        for(int i=0;i<l/2;i++){
            if(skill[i]+skill[l-1-i]!=target){
                return -1;
            }
            ans+=skill[i]*skill[l-i-1];
        }
        return ans;
    }
}; 