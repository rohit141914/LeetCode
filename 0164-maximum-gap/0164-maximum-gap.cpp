class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        set<int>m;
        queue<int>q;
        for(auto x:nums){
           m.insert(x);
        }
        for(auto y:m){
            q.push(y);
        }
        int pre=q.front();
        q.pop();
        int d=INT_MIN;
        while(q.size()!=0){
            d=max(d,q.front()-pre);
            pre=q.front();
            q.pop();
        }
        if(d==INT_MIN){
            return 0;
        }
        return d;
        // int gr=*max_element(nums.begin(),nums.end());
        // vector<int> arr(gr+1,-1);
        // for(int a:nums){
        //     arr[a]=1;
        // }
        
        // int d=INT_MIN;
        // for(int i=0;i<gr;i++){
        //     if(arr[i]==1){
        //         int pre=i;
        //         for(int j=i+1;j<=gr;j++){
        //             if(arr[j]==1){
        //                 d=max(d,j-pre);
        //                 pre=j;
        //             }
        //         }
        //         break;
        //     }
        // }
        // return d;
    }
};