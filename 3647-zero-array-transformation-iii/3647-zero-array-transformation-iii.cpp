// class Solution {
// public:
//     static bool my(vector<int>a,vector<int>b){
//         if(a[1]==b[1]){
//            return a[0]<b[0];
//         }
//         return a[1]>b[1];
//     }
//     int maxRemoval(vector<int>& nums, vector<vector<int>>& q) {
//         sort(q.begin(),q.end(),my);
//         vector<int>t;
//         int i=nums.size()-1;
//         int j=0;
//         int c=0;
//         int l=q.size();
//         // for(auto a:q){
//         //     cout<<a[0]<<' '<<a[1]<<' ';
//         // }
//             while(i>=0&&nums[i]==0){
//                 i--;
//             }
//             while(i>=0&&j<l){
//                 t=q[j];
//                if(nums[i]==0){
//                     i--;
//                     continue;
//                 }
//                 j++;
//                 if(i<t[0]){
//                     c++;
//                     continue;
//                 }
//                 // cout<<i<<' '<<t[0]<<' '<<t[1]<<"    ";
//                 if(i>t[1]){
//                     // cout<<'-';
//                     return -1;
//                 }
//                 if(i>=t[0]&&i<=t[1]){
//                     // flag=false;
//                 // cout<<i<<' '<<t[0]<<' '<<t[1]<<"    ";
//                     for(int j=i;j>=t[0];j--){
//                         if(nums[j]>0){
//                         nums[j]--;
//                         }
//                     }
//                     while(i>=0&&nums[i]==0){
//                         i--;
//                     }
//                 }
//             }
//             c+=l-j;
//             if(i>=0){
//                 return -1;
//             }
//         return c;
//     }
// };

class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(), queries.end());
        priority_queue<int> candidate;
        priority_queue<int, vector<int>, greater<>> chosen;
        int ans = 0;
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++){
            while (j < queries.size() && queries[j][0] == i){
                candidate.push(queries[j][1]);
                j++;
            }
            nums[i] -= chosen.size();
            while (nums[i] > 0 && !candidate.empty() && candidate.top() >= i){
                ans++;
                chosen.push(candidate.top());
                candidate.pop();
                nums[i]--;
            } 
            if (nums[i] > 0)
                return -1;
            while (!chosen.empty() && chosen.top() == i)
                chosen.pop();
            
        }
        return queries.size() - ans;
        
    }
};