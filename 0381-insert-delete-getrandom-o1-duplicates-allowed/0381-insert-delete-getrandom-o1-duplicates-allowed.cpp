class RandomizedCollection {
public:
    unordered_multiset<int>st;
    int si;
    RandomizedCollection() {
        si=0;
    }
    bool insert(int val) {
        si++;
        if(st.find(val)==st.end()){
            st.insert(val);
            return true;
        }
        st.insert(val);
        return false;
    }
    
    bool remove(int val) {
        auto it=st.find(val);
        if(it!=st.end()){
            st.erase(it);
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
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */