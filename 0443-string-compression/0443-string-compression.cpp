class Solution {
public:
    int compress(vector<char>& chars) {
        int ln=chars.size();
        int ans=0;
        int c=0;
        if(ln==1){
            return 1;
        }
        vector<char>arr;
        for(int i=0;i<ln-1;i++){
            if(chars[i]==chars[i+1]){
                c++;
            }
            else{
                c++;
                if(c==1){
                    arr.push_back(chars[i]);
                    c=0;
                }
                else{
                    arr.push_back(chars[i]);
                    string t=to_string(c);
                    for(int k=0;k<t.size();k++){
                        arr.push_back(t[k]);
                    }
                    c=0;
                }
            }
        }
        
        if(chars[ln-1]==chars[ln-2]){
            c++;
            arr.push_back(chars[ln-1]);
            string t=to_string(c);
            for(int k=0;k<t.size();k++){
            arr.push_back(t[k]);
            }
        }
        else{
            arr.push_back(chars[ln-1]);
        }
        chars=arr;
        return arr.size();
    }
};