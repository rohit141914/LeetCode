class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char,int>mp;
        for(auto a:suits){
            mp[a]++;
        }
        int max=0;
        bool single=false;
        for(auto a:mp){
            if(a.second>max){
                max=a.second;
            }
            if(a.second==1){
                single=true;
            }
        }
        if(max==5) return "Flush";

        mp.clear();
        for(auto a:ranks){
            mp[a]++;
        }
        for(auto a:mp){
            if(a.second>=3) return "Three of a Kind";
        }
        for(auto a:mp){
            if(a.second==2) return "Pair";
        }
        return "High Card";
    }
};