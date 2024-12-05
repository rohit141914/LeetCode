class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        int s=0;
        int e=l.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            if(l[m]==t){
                s=m+1;
            }
            else if(t<l[m]){
                if(m==0 || l[m-1]<=t){
                    return l[m];
                }
                else{
                    e=m-1;
                }
            }
            else{
                s=m+1;
            }
        }
        return l[0];
    }
};