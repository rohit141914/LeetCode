class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int a=stoi(event1[0].substr(0,2)+event1[0].substr(3,2));
        int b=stoi(event1[1].substr(0,2)+event1[1].substr(3,2));
        int c=stoi(event2[0].substr(0,2)+event2[0].substr(3,2));
        int d=stoi(event2[1].substr(0,2)+event2[1].substr(3,2));
        return a<=d &&c<=b;
    }
};