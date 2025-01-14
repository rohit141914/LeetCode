/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peak(MountainArray &mountainArr,int ln){
        int s=0;
        int e=ln-1;
        while(s<=e){
            int m=(s+e)/2;
            cout<<m;
            int n=-1;
            int p=-1;
            if(m!=0){
            p=mountainArr.get(m-1);
            }
            int c=mountainArr.get(m);
            if(m!=ln-1){
            n=mountainArr.get(m+1);
            }
            if(m==0){
                if(c>n){
                    return 0;
                }
                return 1;
            }
            if(m==ln-1){
                if(c>p){
                    return ln-1;
                }
                return ln-2;
            }
            if(c>p&&c>n){
                return m;
            }
            else if(c<p){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return -1;
    }
    int search_l(MountainArray &mountainArr,int peak,int tar){
        int s=0;
        int e=peak;
        while(s<=e){
            int m=(s+e)/2;
            // cout<<m<<' ';
            int c=mountainArr.get(m);
            if(c==tar){
                return m;
            }
            else if(c<tar){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return -1;
    }
    int search_r(MountainArray &mountainArr,int start,int le,int tar){
        int s=start;
        int e=le-1;
        while(s<=e){
            int m=(s+e)/2;
            // cout<<m<<' ';
            int c=mountainArr.get(m);
            if(c==tar){
                return m;
            }
            else if(c<tar){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int ln=mountainArr.length();
        int p=peak(mountainArr,ln);
        int left=search_l(mountainArr,p,target);
        // cout<<p;

        if(left!=-1){
            return left;
        }
        int right=search_r(mountainArr,p,ln,target);
        if(right!=-1){
            return right;
        }
        return -1;
    }
};