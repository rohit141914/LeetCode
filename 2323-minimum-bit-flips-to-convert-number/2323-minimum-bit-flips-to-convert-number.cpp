class Solution {
public:
    int minBitFlips(int start, int goal) {
         int p=start^goal;
        return __builtin_popcount(p);
    }
};