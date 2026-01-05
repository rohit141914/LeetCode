class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>>ar(3,vector<int>(3,-1));
        bool f=true;
        for(auto a:moves){
            if(f){
                ar[a[0]][a[1]]=1;
                f=false;
            }
            else{
                ar[a[0]][a[1]]=0;
                f=true;
            }
        }
        for(int i=0;i<3;i++){
            if(ar[i][0]==ar[i][1] && ar[i][1] ==ar[i][2]){
                if(ar[i][0]==1) return "A";
                if(ar[i][0]==0) return "B";
            }
            if(ar[0][i]==ar[1][i]&&ar[1][i]==ar[2][i]){
                if(ar[0][i]==1) return "A";
                if(ar[0][i]==0) return "B";
            }
        }
        if(ar[0][0]==ar[1][1]&&ar[1][1]==ar[2][2]){
            if(ar[0][0]==1) return "A";
            if(ar[0][0]==0) return "B";
        }
        if(ar[0][2]==ar[1][1]&&ar[1][1]==ar[2][0]){
            if(ar[0][2]==1) return "A";
            if(ar[0][2]==0) return "B";
        }
        return moves.size()==9?"Draw":"Pending";
    }
};