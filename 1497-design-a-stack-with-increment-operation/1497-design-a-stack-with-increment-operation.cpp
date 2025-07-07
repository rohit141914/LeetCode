class CustomStack {
public:
    vector<int>arr;
    int cap;
    int size;
    CustomStack(int maxSize) {
        this->cap=maxSize;
        this->size=0;
    }
    
    void push(int x) {
        if(size<cap){
            arr.push_back(x);
            size++;
        }
    }
    
    int pop() {
        if(size>0){
            int ele=arr[size-1];
            arr.pop_back();
            size--;
            return ele;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k&&i<size;i++){
            arr[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */