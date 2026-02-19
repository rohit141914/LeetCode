class RideSharingSystem {
public:
    deque<int>ri;
    deque<int>di;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        ri.push_back(riderId);
    }
    
    void addDriver(int driverId) {
        di.push_back(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        int r=-1;
        int d=-1;
        vector<int>res;
        if(ri.size()>0){
            r=ri.front();
            ri.pop_front();
        }
        if(r != -1 && di.size()>0){
            d=di.front();
            di.pop_front();
        }
        if(d==-1 && r!=-1){
            ri.push_front(r);
            r=-1;
        }
        res.push_back(d);
        res.push_back(r);
        return res;
    }
    
    void cancelRider(int riderId) {
        deque<int>t;

        while(ri.size()>0){
            if(ri.front()!=riderId){
                t.push_back(ri.front());
            }
            ri.pop_front();
        }
        ri=t;

    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */