class AuthenticationManager {
public:
    int dura;
    unordered_map<string,int>mp;
    AuthenticationManager(int timeToLive) {
        this->dura=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        mp[tokenId]=currentTime;
    }
    
    void renew(string tokenId, int currentTime) {
        if(mp.find(tokenId)!=mp.end()){
            if(mp[tokenId]+dura>currentTime){
                mp[tokenId]=currentTime;
            }
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int c=0;
        for(auto a:mp){
            if(a.second+dura>currentTime) c++;
        }
        return c;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */