class Solution {
public:
    string format(string s,  int l, bool num){
        int index_n=0;
        int index_c=0;
        string res="";
        if(num){
            while(res.length()<l){
                while(!(s[index_n]>='0' && s[index_n]<='9')){
                    index_n++;
                }
                res+=s[index_n];
                index_n++;
                if(res.length()<l){
                    while(s[index_c]>='0' &&s[index_c]<='9'){
                        index_c++;
                    }
                    res+=s[index_c];
                    index_c++;
                }
            }
        }
        else{
            while(res.length()<l){
                while(s[index_c]>='0' &&s[index_c]<='9'){
                    index_c++;
                }
                res+=s[index_c];
                index_c++;
                if(res.length()<l){
                    while(!(s[index_n]>='0' && s[index_n]<='9')){
                        index_n++;
                    }
                    res+=s[index_n];
                    index_n++;
                }
            }
        }
        return res;

    }
    string reformat(string s) {
        int l=s.length();
        int cl=0;
        int nl=0;
        for(auto a:s){
            if(a>='0' && a<='9')nl++;
            else cl++;
        }
        if(cl-nl>1 || cl-nl<-1) return "";
        string res;
        if(nl>=cl){
            res=format(s,l,true);
        }
        else{
            res=format(s,l,false);
        }

        return res;
    }
};