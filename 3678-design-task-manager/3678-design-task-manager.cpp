struct obj{
    int user;
    int task;
    int p;
    obj(){
        this->user=0;
        this->task=0;
        this->p=0;
    }
    obj(int user,int task,int p){
        this->user=user;
        this->task=task;
        this->p=p;
    }
};
struct my{
    bool operator()(const obj &a,const obj &b) const{
        if(a.p==b.p){
            return a.task<b.task;
        }
        return a.p<b.p;
    }
};
class TaskManager {
public:
    priority_queue<obj,vector<obj>,my>que;
    unordered_map<int,obj>mp;
    TaskManager(vector<vector<int>>& tasks) {
        for(auto a:tasks){
            obj o(a[0],a[1],a[2]);
            que.push(o);
            mp[a[1]]=(o);
        }
    }
    
    void add(int userId, int taskId, int priority) {
        obj o(userId,taskId,priority);
        que.push(o);
        mp[taskId]=o;
    }
    
    void edit(int taskId, int newPriority) {
        auto a=mp[taskId];
        a.p=newPriority;
        que.push(a);
        mp[taskId]=a;
    }
    
    void rmv(int taskId) {
        mp.erase(taskId);
    }
    
    int execTop() {
        while(que.empty()==false){
            obj a=que.top();
            if(mp.count(a.task)&&mp[a.task].p==a.p&&mp[a.task].user == a.user){
                mp.erase(a.task);
                que.pop();
                return a.user;
            }
            que.pop();
        }
        return -1;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */