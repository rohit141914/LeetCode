class Solution {
public:
    int minimumBuckets(string hamsters) {
        
        int ans=0;
        int l=hamsters.length();
        if(l==1){
            if(hamsters[0]=='H')return -1;
        }
        for(int i=0;i<l;i++){
            if(hamsters[i]=='H'){
                if(i==0){
                    if(hamsters[1]=='.'){
                        hamsters[1]='P';
                        ans++;
                        continue;
                    }
                    return -1;
                }
                if(i!=0 &&  hamsters[i-1]=='P'){
                    continue;
                }
                if(i!=l-1 &&(hamsters[i+1]=='.')){
                    hamsters[i+1]='P';
                    ans++;
                    continue;
                }
                if(i!=0 && hamsters[i-1]=='.'){
                    ans++;
                    continue;
                }
                if(i==l-1){
                    if(hamsters[l-2]=='.' || hamsters[l-2]=='P') {
                        ans++;
                        continue;
                    }
                    return -1;
                }
                return -1;
            }
        }
        return ans;
    }
};