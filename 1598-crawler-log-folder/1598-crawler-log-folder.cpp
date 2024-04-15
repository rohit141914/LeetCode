class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int c=0;
        int ln=logs.size();
        for(int i=0;i<ln;i++){
            if(logs[i]=="../"){
                if(c>0) c--;
            }
            else if(logs[i]=="./") continue;
            else c++;
        }
        if(c<0){return 0;}
        return c;
    }
};