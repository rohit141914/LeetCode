class RandomizedSet {
public:

    unordered_set<int>st;
    int si;
    RandomizedSet() {
        si=0;
    }
    
    bool insert(int val) {
        if(st.find(val)!=st.end()){
            return false;
        }
        st.insert(val);
        si++;
        return true;
    }
    
    bool remove(int val) {
        if(st.find(val)!=st.end()){
            st.erase(val);
            si--;
            return true;
        }
        return false;
        
    }
    
    int getRandom() {
        int i=rand()%si;
        auto it=st.begin();
        advance(it,i);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */