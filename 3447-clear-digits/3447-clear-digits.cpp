class Solution {
public:
    string clearDigits(string s) {
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]>='0' && s[i]<='9'){
                int j=i-1;
                while(j>=0){
                    if(s[j]>='a'&&s[j]<='z'){
                        s[j]='A';
                        break;
                    }
                    j--;
                }
            }
        }
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>=97&&s[i]<=122){
                swap(s[i],s[j]);
                j++;
            }
        }
        return s.substr(0,j);
    }
};