class Solution {
public:
    bool checkString(string s) {
     bool b=false;
     for(auto x:s){
        if(x=='a'&& b==true){
            return false;
        }
        if(x=='b'){
            b=true;
        }
     }
     return true;
    }
};