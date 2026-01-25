class Solution {
public:
    int minMovesToMakePalindrome(string &s) {
        int l=s.length();
        if(l<=2) return 0;
        char fi=s[0];
        int res=0;
        for(int i=l-1;i>=0;i--){
            if(s[i]!=fi) res++;
            else{
                if(i==0){   
                    res=res-(l/2);
                }
                else{
                    s.erase(i,1);
                }
                break;
            }
        }
        s.erase(0,1);
        return res+minMovesToMakePalindrome(s);
    }
};