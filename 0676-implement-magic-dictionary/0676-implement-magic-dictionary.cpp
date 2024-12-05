class MagicDictionary {
public:
        unordered_set<string>mp;
    MagicDictionary() {
    }
    
    void buildDict(vector<string> dictionary) {
     for(auto x:dictionary){
        mp.insert(x);
     }
    }
    
    bool search(string searchWord) {
        for(int i=0;i<searchWord.length();i++){
            string t=searchWord;
            for(char j='a';j<='z';j++){
                t[i]=j;
                if(t==searchWord){
                    continue;
                }
                if(mp.find(t)!=mp.end()){
                    return true;
                }
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */