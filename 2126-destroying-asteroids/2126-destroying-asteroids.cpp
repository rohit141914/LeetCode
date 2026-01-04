class Solution {
public:
    bool asteroidsDestroyed(long mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int l=asteroids.size();
        for(auto a:asteroids){
            if(mass>=a){
                mass+=a;
            }
            else{
                return false;
            }
        }
        return true;
    }
};