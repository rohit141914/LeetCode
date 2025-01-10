class Solution {
public:
    static bool mycheck(vector<int>&a,vector<int>&b){
        // return double(a[0]/a[1])>double(b[0]/b[1]);
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        int i=0;
        sort(boxTypes.begin(),boxTypes.end(),mycheck);
    // for(auto x:boxTypes){
    //     cout<<x[0]<<" "<<x[1]<<"      ";
    // }
        while(truckSize!=0&&i<boxTypes.size()){
            if(boxTypes[i][0]<=truckSize){
                ans+=(boxTypes[i][0]*boxTypes[i][1]);
                // cout<<truckSize;
                truckSize=truckSize-boxTypes[i][0];
                i++;
            }else{
                ans+=truckSize*boxTypes[i][1];
                return ans;
                i++;
            }
        }
        return ans;
    }
};