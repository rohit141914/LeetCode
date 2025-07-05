class Solution {
public:
    int count(string n){
        int ans=0;
        for(auto a:n){
            ans+=a-'0';
        }
        return ans;
    }
    string digitSum(string s, int k) {
        while(s.length()>k){
            string t="";
            string new_str="";
            int n=0;
            for(int i=0;i<s.length();i++){
                t+=s[i];
                n++;
                if(n==k){
                    int num=count(t);
                    new_str+=to_string(num);
                    t="";
                    n=0;
                }
            }
            if(n!=0){
                int num=count(t);
                    new_str+=to_string(num);
            }
            s=new_str;
        }
        return s;
    }
};