class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int si=0;
        int li=0;
        int s=nums[0];
        int la=nums[0];
        int l=nums.size();
        for(int i=1;i<l;i++){
            if(nums[i]<s){
                s=nums[i];
                si=i;
            }
            if(nums[i]>la){
                la=nums[i];
                li=i;
            }
        }
        int c=si;
        int d=li;
        si=min(c,d);
        li=max(c,d);
        int a=si+1;
        int b=l-li;
        int ans=0;
        // cout<<si<< " "<<li<< " ";
        for(int j=0;j<2;j++){
        if(a<b){
            ans+=a;
            a=li-si;
        }
        else{
            ans+=b;
            b=l-b-a+1;
        }
        }
        return ans;
    }
};