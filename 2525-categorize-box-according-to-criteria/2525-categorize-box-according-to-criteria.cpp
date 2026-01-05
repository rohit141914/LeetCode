class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool Bulky=false;
        long long v=length;
        v*=width;
        v*=height;
        if(length>=10000 || width >=10000 || height>=10000 ||(v>=1000000000)) Bulky=true;
        bool heavy=mass>=100?true:false;
        if(Bulky && heavy) return "Both";
        if(!Bulky && !heavy) return "Neither";
        if(Bulky && !heavy) return "Bulky";
        if(!Bulky && heavy) return "Heavy";
        return"";
    }
};