class Solution {
public:
    int minDeletion(vector<int>& nums) {
     int l=nums.size();
     int d=0;
    pair<int,int>p;
    //  int p=nums[0];
    int c=0;
    p={nums[0],0};
     for(int i=1;i<l;i++){
        if(nums[i]==p.first){
            if(p.second%2==0){
                // p={nums[i],i-d};
                c++;
                d++;
                nums[i]=-1;
            }
            else{
            // cout<<i<<" ";
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