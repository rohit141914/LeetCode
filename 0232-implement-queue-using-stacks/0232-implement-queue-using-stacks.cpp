class MyQueue {
public:
    stack<int>s;
    stack<int>h;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty()){
            int t=s.top();
            h.push(t);
            s.pop();
        }
        s.push(x);
        while(!h.empty()){
            int t=h.top();
            s.push(t);
            h.pop();
        }
    }
    
    int pop() {
        int t=s.top();
        s.pop();
        return t;
    }
    
    int peek() {
        int t=s.top();
        return t;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */