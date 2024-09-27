class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=s.length();
        int ans=0;
        for(int i=0;i<l;i++){
            int c=0;
            vector<int>arr(256,0);
            for(int j=i;j<l;j++){
                if(arr[s[j]]==1){
                    break;
                }
                // else if( arr[s[j]-'a']==0){
                arr[s[j]]=1;
                c++;
                ans=max(ans,c);
                // }
            }
        }
        return ans;
    }
};