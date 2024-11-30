class Solution {
public:
    int myAtoi(string s) {
        long long t=0;
        bool negative=false;
        bool paas=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='-' && t==0 && paas ==false){
                negative=true;
                paas=true;
            }
            else if(s[i]=='+' && t==0 && paas ==false){
                negative=false;
                paas=true;
            }
            else if(s[i]>='0' && s[i]<='9'){
                paas=true;
                t=(t*10)+(s[i]-'0');
                if(negative && t>INT_MAX){
                    return INT_MIN;
                }
                if(!negative && t>INT_MAX){
                    return INT_MAX;
                }
            }
            else if(s[i]==' ' && t==0 && paas==false){
                continue;
            }
            else{
                break;
            }
        }
        if(t==0){
            return 0;
        }
        // string ma=to_string(INT_MAX);
        // string mi=to_string(INT_MIN);
        // cout<<ma<<' '<<t<<' '<<mi;
        // if(t<mi){
        //     return INT_MIN;
        // }
        // if(t>ma){
        //     return INT_MAX;
        // }
        return negative==false?t:t*-1;
    }
};