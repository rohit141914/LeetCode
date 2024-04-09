class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        
       queue<int> q;
        int ln=t.size();
        for(int i=0;i<ln;i++){
            q.push(i);
        }
        int c=0;
        while(!q.empty()){
            c++;
            int fr=q.front();
            q.pop();
            t[fr]--;
            if(fr==k &&t[fr]==0){
                return c;
            }
            if(t[fr]!=0){
            q.push(fr);    
            }
            
        }
        return c;
    }
};