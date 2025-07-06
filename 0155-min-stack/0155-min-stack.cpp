class MinStack {
public:
    vector<int>arr;
    vector<int>mi;
    MinStack() {
        
    }
    
    void push(int val) {
        arr.push_back(val);
        int l=mi.size();
        if(l==0){
            mi.push_back(val);
            return;
        }
        if(val<=mi[l-1]){
            mi.push_back(val);
        }
    }
    
    void pop() {
        int l=arr.size();
        if(l<1)return;
        if(mi[mi.size()-1]==arr[l-1]){
            mi.pop_back();
        }
        arr.pop_back();
    }
    
    int top() {
        int l=arr.size();
        if(l<1) return -1;
        return arr[l-1];
    }
    
    int getMin() {
        int l=mi.size();
        if(l>0) return mi[mi.size()-1];
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */