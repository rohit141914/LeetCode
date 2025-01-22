class Solution {
public:
    int h(int red,int blue){
        int a=red;
        int b=blue;
        int c=1;
        int ans=0;
        while(a>=c){
            a=a-c;
            ans++;
            c++;
            if(b>=c){
                b=b-c;
                c++;
                ans++;
            }
            else{
                return ans;
            }
        }
        return ans;     
    }

    int maxHeightOfTriangle(int red, int blue) {
        int a=h(max(red,blue),min(red,blue));
        int b=h(min(red,blue),max(red,blue));
        return max(a,b);
    }
};