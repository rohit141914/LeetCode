class Solution {
public:
    int sol(vector<int>&a, vector<int>&b){
        unordered_map<long,int>mp;
        int res=0;
        long long t=0;
        for(long i:a){
            t=(i*i);
            if(mp[t]==0){
                mp[t]=1;
            }
            else{
                mp[t]+=1;
            }
        }
        int l=b.size();
        for(int i=0;i<l-1;i++){
            for(int j=i+1;j<l;j++){
                long t1=b[i];
                long t2=b[j];
                // t=(b[i]*b[j]);
                t=t1*t2;
                if(mp.find(t)!=mp.end()){
                    res+=mp[t];
                } 
            }
        }
        return res;
    }
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        return sol(nums1,nums2)+sol(nums2,nums1);
    }
};