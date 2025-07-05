class Solution {
public:
    int lastRemaining(int n) {
        int left=true;
        int head=1;
        int step=1;
        int rem=n;
        while(rem>1){
            if(left || rem%2==1){
                head+=step;
            }
            step*=2;
            rem/=2;
            left=!left;
        }
        return head;
    }
};