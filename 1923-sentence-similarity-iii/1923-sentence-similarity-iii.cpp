class Solution {
public:
    bool areSentencesSimilar(string sentence1, string s2) {
        if(sentence1==s2){
            return 1;
        }
       vector<string>a;
       vector<string>b;
       string t="";
       int l=sentence1.size();
       int prev=0;
       for(int i=0;i<l;i++){
        if(sentence1[i]==' '){
            t=sentence1.substr(prev,i-prev);
            a.push_back(t);
            prev=i+1;
        }
       }
       t=sentence1.substr(prev,l-prev);
       a.push_back(t);

       l=s2.size();
       prev=0;
       for(int i=0;i<l;i++){
        if(s2[i]==' '){
            t=s2.substr(prev,i-prev);
            b.push_back(t);
            prev=i+1;
        }
       }
       t=s2.substr(prev,l-prev);
       b.push_back(t);

        int l1=a.size();
        int l2=b.size();
        int pr=0;
        for(int i=0;i<min(l1,l2);i++){
            if(a[i]==b[i]){
                pr++;
                a[i]="-1";
                b[i]="-2";
            } 
            else break;
        }

        int suff=0;
        for(int i=0;i<min(l1,l2);i++){
            if(a[l1-1-i]==b[l2-1-i]) suff++;
            else break;
        }
        return (suff+pr==min(l1,l2));
    }
};