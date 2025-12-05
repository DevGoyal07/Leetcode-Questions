class Solution {
public:
    int mySqrt(int x) {

        long long   s=0;
        long long   e=x;
        long long   mid=s+(e-s)/2;
        long long   ans=0;
       

        while(s<=e){
            if(mid*mid==x){
                ans=mid;
                return ans;
            }
            else if(mid*mid>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
};