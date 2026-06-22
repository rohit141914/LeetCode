class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>st;
        for(auto a:password){
            st.insert(a);
        }
        int res=0;
        for(auto a:st){
            if(a>='a' && a<='z') res+=1;
            else if(a>='A' && a<='Z') res+=2;
            else if(a>='0' && a<='9') res+=3;
            else if( a=='!' || a=='@' || a=='#' || a=='$') res+=5;
            else{
                continue;
            }
        }
        return res;
    }
};