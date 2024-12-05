class Solution {
public:
    string longestWord(vector<string>& words) {
      unordered_set<string>st;
      for(auto x:words){
        st.insert(x);
      }  
      int c=0;
      int max_l=0;
      string ans="";
      for(auto x:words){
        int ln=x.length();
        c=0;
        string t="";
        for(int i=0;i<ln;i++){
            t+=x[i];
            if(st.find(t)==st.end()){
                break;
            }
            c++;
        }
        if(c==ln&&c>max_l){
            max_l=c;
            ans=x;
        }
        else if(c==ln&&c==max_l){
            string tt=ans;
            string xx=x;
            for(int i=0;i<c;i++){
                if(tt[i]<x[i]){
                    ans=tt;
                    break;
                }
                if(tt[i]>x[i]){
                    ans=xx;
                    break;
                }
            }
        }
      }
      return ans;
    }
};