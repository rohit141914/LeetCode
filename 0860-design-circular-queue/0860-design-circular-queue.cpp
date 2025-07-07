class MyCircularQueue {
public:
    int st;
    int en;
    int cap;
    int size;
    vector<int>arr;
    MyCircularQueue(int k) {
        this->cap=k;
        this->st=0;
        this->en=0;
        this->size=0;
        arr.resize(k);
    }
    
    bool enQueue(int value) {
        if(isFull())return false;
        arr[en]=value;
        size++;
        en=(en+1)%cap;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())return false;
        st=(st+1)%(cap);
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty())return -1;
        return arr[st];
    }
    
    int Rear() {
        if(size==0)return -1;
        if(en!=0){
            return arr[en-1];
        }
        return arr[cap-1];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return cap==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */