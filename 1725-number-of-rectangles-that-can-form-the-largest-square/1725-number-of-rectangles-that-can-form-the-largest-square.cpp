class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
     
        
        int ln=rectangles.size();
        map<int,int>mp;
        for(int i=0;i<ln;i++){
            int a=min(rectangles[i][0],rectangles[i][1]);
            mp[a]++;
        }
        int ans=0;
        for(auto x: mp){
            if(x.first>ans){
                ans=x.first;
            }
        }
        return mp[ans];
    }
};