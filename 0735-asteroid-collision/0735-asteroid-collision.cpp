class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int l=asteroids.size();
        int p=0;
        bool f=false;
        for(int i=0;i<l;i++){
            f=false;
            if(asteroids[i]>0) st.push(asteroids[i]);
            else{
                p=abs(asteroids[i]);
                if(st.empty()==true){
                    st.push(asteroids[i]);
                }
                else if(st.top()<0){
                    st.push(asteroids[i]);
                }
                else if(st.top()<=p){
                    while(st.empty()==false&& st.top()>0 && st.top()<p){
                        st.pop();
                    }
                    if(st.empty()==false&& st.top()>0 && st.top()==p){
                        st.pop();
                        f=true;
                    }
                    if(st.empty()==false&& st.top()>0&& st.top()>p){
                        continue;
                    }
                    if(f==false){
                        st.push(asteroids[i]);
                    }
                }
            }
        }
        asteroids.clear();
        while(st.empty()==false){
            asteroids.push_back(st.top());
            st.pop();
        }
        reverse(asteroids.begin(),asteroids.end());
        return asteroids;
    }
};