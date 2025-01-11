class Solution {
public:
    int minDeletion(vector<int>& nums) {
     int l=nums.size();
     int d=0;
    pair<int,int>p;
    int c=0;
    p={nums[0],0};
     for(int i=1;i<l;i++){
        if(nums[i]==p.first){
            if(p.second%2==0){
                c++;
                d++;
                nums[i]=-1;
            }
            else{
            p.second++;
            }
        }
        else{
            p.first=nums[i];
            p.second=i-d;
        }
     }
     l=l-c;
     if(l%2==1){
        c++;
     }
    return c;
    }
};