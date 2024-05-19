class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x:nums){
            int c=0;
            if(x%2==0&&(x!=1)){
                while(x%2==0){
                    x/=2;
                    c++;
                }
        m[2]= max(c,m[2]);
            }
        c=0;
        int i=3;
        while(x>1){
            c=0;
            while(x%i==0){
                x/=i;
                c++;
            }
            if(c!=0){
            m[i]=max(m[i],c);
            }
            i=i+2;
        }
        }
        return m.size();
    }
};