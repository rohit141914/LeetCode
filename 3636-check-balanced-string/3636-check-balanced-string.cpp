class Solution {
public:
    bool isBalanced(string num) {
     int l=num.size();
     int s=0;
     string t="";
     for(int i=0;i<l;i++){
        t.clear();
        t=t+num[i];
        if(i%2==0){
            s=s+stoi(t);
        }
        else{
            s=s-stoi(t);
        }
     }   
     return s==0;
    }
};