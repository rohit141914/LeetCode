class Twitter {
public:
    unordered_map<int,vector<int>>following;
    vector<pair<int,int>>tweet;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweet.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>ans;
        unordered_set<int>st(following[userId].begin(),following[userId].end());
        st.insert(userId);
        int l=tweet.size();
        int size=0;
        for(int i=l-1;i>=0;i--){
            auto cu=tweet[i];
            if(st.find(cu.first)!=st.end()){
                ans.push_back(cu.second);
                size++;
                if(size==10){
                    return ans;
                }
            }
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].push_back(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        vector<int>t=following[followerId];
        vector<int>temp;
        for(auto a:t){
            if(a!=followeeId){
                temp.push_back(a);
            }
        }
        following[followerId]=temp;
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */