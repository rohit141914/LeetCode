class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.length();
        int m=typed.length();
        int i=0;
        int j=0;
        while(i<n&&j<m){
            if(name[i]==typed[j]){
                int nc=0;
                int tc=0;
                char cur=name[i];
                while(i<n&&name[i]==cur){
                    nc++;
                    i++;
                }
                cur=typed[j];
                while(j<m&&typed[j]==cur){
                    tc++;
                    j++;
                }
                if(nc>tc){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return i==n&&j==m;
    }
};