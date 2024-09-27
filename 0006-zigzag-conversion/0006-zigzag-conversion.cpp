class Solution {
public:
    string convert(string s, int numRows) {
        map<int,string>mp;
        int l=s.length();
        int j=1;
        bool ne=false;
        for(int i=0;i<l;i++){
            if(j==numRows){
                ne=true;
            }
            if(j<=1){
                ne=false;
            }
            if(ne==false){
                mp[j]=mp[j]+s[i];
                j++;
            }
            else{
                mp[j]=mp[j]+s[i];
                j--;
            }
            
        }
        s.clear();
        for(auto x:mp){
            s=s+x.second;
        }
        return s;
    }
};