class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.length();
        int s2=word2.length();
        string ans="";
        for(int i=0;i<s1;i++){
            ans+=word1[i];
        if(i<s2){
            ans+=word2[i];
        }
        else{
            break;
        }
    }
    if(s1>s2){
        ans=ans+word1.substr(s2+1,s1);
    }
    else{
        ans=ans+word2.substr(s1,s2);
    }
    return ans;
        }
};