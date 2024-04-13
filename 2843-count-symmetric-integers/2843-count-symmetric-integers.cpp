class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res=0;
        int sum=0;
        int ls=0;
        int rs=0;
        for(int i=low;i<=high;i++){
            string n=to_string(i);
            int ln=n.length();
            if(ln%2==1){
                continue;
            }
            
            ls=0;rs=0;
              for(int i=0; i<ln/2; i++){  
               ls += n[i] - '0'; 
               rs += n[ln-i-1] - '0';  
             }
            
            if(ls==rs) res++;
        }
           
        return res;
    }
};