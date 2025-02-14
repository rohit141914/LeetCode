class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int c=0;
        string res="";
        int sum=0;
        while(i>=0||j>=0||c>0){
            sum=c;
            if(i>=0&&a[i]=='1')sum++;
            if(j>=0&&b[j]=='1')sum++;
            i--;
            j--;
            c=sum/2;
            res+=to_string(sum%2);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};