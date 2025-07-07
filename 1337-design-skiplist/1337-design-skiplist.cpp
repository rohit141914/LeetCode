class Skiplist {
public:
    multiset<int>st;
    Skiplist() {
        
    }
    
    bool search(int target) {
        if(st.find(target)!=st.end()) return true;
        return false;
    }
    
    void add(int num) {
        st.insert(num);
    }
    
    bool erase(int num) {
        auto it=st.find(num);
        if(it!=st.end()){
            st.erase(it);
            return true;
        }
            return false;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */