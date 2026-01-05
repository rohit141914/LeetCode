class Solution {
public:
    int divisorSubstrings(int num, int k) {
     string str=to_string(num);
     string t="";
     for(int i=0;i<k;i++) t+=str[i];
     int l=str.length();
     int res=0;
     int n=stoi(t);
     if(num%n==0)res++;
     for(int i=k;i<l;i++){
        if(t.length()>1) t.erase(t.begin());
        else t="";
        t=t+str[i];
        n=stoi(t);
        if(n==0)continue;
        if(num%n == 0)res++;
     }
     return res;
    }
};