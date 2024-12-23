class MedianFinder {
public:
    priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>m;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(s.size()>m.size()){
            if(num<=s.top()){
                s.push(num);
                m.push(s.top());
                s.pop();
            }
            else{
                m.push(num);
            }
        }
        else{
            if(s.empty()||num<=s.top()){
                s.push(num);
            }
            else{
                m.push(num);
                s.push(m.top());
                m.pop();
            }
        }
    }
    
    double findMedian() {
        if(s.size()==m.size()){
            return static_cast<double>(s.top()+m.top())/2;
        }
        return s.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */