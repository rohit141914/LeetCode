class ExamTracker {
public:
    vector<int>ti;
    vector<long long>sc;
    ExamTracker() {
        
    }
    
    void record(int time, int score) {
        ti.push_back(time);
        long long s=score;
        if(sc.size()>0){
            s+=sc.back();
        }
        sc.push_back(s);
    }
    
    long long totalScore(int startTime, int endTime) {
        int l=lower_bound(ti.begin(),ti.end(),startTime)-ti.begin();
        int r=upper_bound(ti.begin(),ti.end(),endTime)-ti.begin()-1;
        if(l>r) return 0;
        if(l==0) return sc[r];
        return sc[r]-sc[l-1];
    }
};

/**
 * Your ExamTracker object will be instantiated and called as such:
 * ExamTracker* obj = new ExamTracker();
 * obj->record(time,score);
 * long long param_2 = obj->totalScore(startTime,endTime);
 */