class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        queue<int> s;
        int ln=students.size();
        for(int i=0;i<ln;i++){
            q.push(students[i]);
        }
        for(int i=0;i<ln;i++){
            s.push(sandwiches[i]);
        }
        int c=0;
        
         while(c!=ln){
             if(q.front()==s.front()){
                 c=0;
                 s.pop();
                 q.pop();
                 ln--;
             }
             else {
                 int a=q.front();
                 q.pop();
                 c++;
                 q.push(a);
             }
         }
        
        return s.size();
    }
};