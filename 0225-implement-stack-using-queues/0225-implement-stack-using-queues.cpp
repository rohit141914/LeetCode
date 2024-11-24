class MyStack {
public:
        queue<int>q1;
        queue<int>q2;
    MyStack() {

    }
    
    void push(int x) {
        while(q1.empty()==false){
            int f=q1.front();
            q1.pop();
            q2.push(f);
        }
        q1.push(x);
        while(q2.empty()==false){
            int f=q2.front();
            q2.pop();
            q1.push(f);
        }
    }
    
    int pop() {
      int t = q1.front();
      q1.pop();
      return t;
    }
    
    int top() {
        int t=q1.front();
        return t;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */