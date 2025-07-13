class Solution {
public:
    static bool my(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0]<b[0];
    }
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end(),my);
        int ln=events.size();
        int j=0;
        int l=0;
        for(auto a:events) l=max(l,a[1]);
        l++;
        priority_queue<int,vector<int>,greater<int>>p;
        int ans=0;
        for(int i=1;i<=l;i++){
            while(j<ln&&events[j][0]<=i){
                p.push(events[j][1]);
                j++;
            }
            while(p.empty()==false&&p.top()<i){
                p.pop();
            }
            if(p.empty()==false){
                p.pop();
                ans++;
            }
        }
        return ans;
    }
};