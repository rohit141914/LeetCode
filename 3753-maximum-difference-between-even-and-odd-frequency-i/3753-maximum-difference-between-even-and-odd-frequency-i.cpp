class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(auto a:s){
            mp[a]++;
        }
        vector<int>arr;
        for(auto a:mp){
            arr.push_back(a.second);
        }
        sort(arr.begin(),arr.end());
        int of=-1;
        int ef=-1;
        for(auto a:arr){
            if(of==-1&&a%2==1){
                of=a;
            }
            if(ef==-1&&a%2==0){
                ef=a;
            }
        }
        reverse(arr.begin(),arr.end());
        if(of==-1||ef==-1){
            return -1;
        }
        int ol=-1;
        int el=-1;
        for(auto a:arr){
            if(ol==-1&&a%2==1){
                ol=a;
            }
            if(el==-1&&a%2==0){
                el=a;
            }
        }
        // cout<<of<<ef<<ol<<el<<"-";
        return max((ol-ef),(of-el));
    }
};