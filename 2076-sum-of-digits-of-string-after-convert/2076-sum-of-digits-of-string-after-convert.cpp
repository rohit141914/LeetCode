class Solution {
public:
    int getLucky(string s, int k) {
        string temp="";
        for(char x:s){
            int ci=(x-96);
            temp=temp+to_string(ci);
        }
        int n=0;
        for(auto x:temp){
        string t2="";
        t2+=x;
        n+=stoi(t2);
        }
        while(k>1){
            int no=0;;
            while(n){
                int r=n%10;
                no+=r;
                n/=10;
            }
            n=no;
            k--;
        }
        return n;
    }
};