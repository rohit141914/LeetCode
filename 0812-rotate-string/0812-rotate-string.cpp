class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()<=goal.length()){
            s=s+s;
            return s.contains(goal);
        }
        return false;
    }
};