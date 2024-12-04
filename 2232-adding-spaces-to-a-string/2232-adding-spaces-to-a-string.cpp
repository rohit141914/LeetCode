class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string t="";
        int j=0;

        for(int i=0;i<s.size();i++){
            if(j<spaces.size() && i==spaces[j]){
                t+=' ';
                j++;
            }
                t+=s[i];
        }
        return t;
    }
};