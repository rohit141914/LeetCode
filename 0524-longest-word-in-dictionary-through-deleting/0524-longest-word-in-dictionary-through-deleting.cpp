class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        int l=s.length();
        int max_l=0;
        string ans="";
        for(auto x:dictionary){
            int j=0;
            for(int i=0;i<l && j<x.length();i++){
                if(s[i]==x[j]){
                      j++;  
                }
            }
            if(j==x.length() && x.length()>max_l){
                max_l=j;
                ans=x;
            }
            else if(j==x.length() && x.length()==max_l){
                string xx=x;
                for(int i=0;i<x.length();i++){
                    if(x[i]<ans[i]){
                        ans=xx;
                        break;
                    }
                    else if(x[i]>ans[i]){
                        break;
                    }
                }
            }
        }
        return ans;
    }
};