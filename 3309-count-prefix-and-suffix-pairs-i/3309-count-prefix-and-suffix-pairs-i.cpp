class Solution {
public:
    bool isp(string a,string b){
        int l=a.length();
        if(l>b.length()){
            return false;
        }
        string p=b;
        p.erase(p.begin()+l,p.end());
        string la=b;
        la.erase(la.begin(),la.begin()+(b.size()-l));
        // cout<<a<<" "<<p<<" "<<la<<"      ";
        return (a==p)&&(a==la);
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        
        int l=words.size();
        int c=0;
        for(int i=0;i<l-1;i++){
            for(int j=i+1;j<l;j++){
                if(isp(words[i],words[j]))c++;

            }
        }
        return c;
    }
};