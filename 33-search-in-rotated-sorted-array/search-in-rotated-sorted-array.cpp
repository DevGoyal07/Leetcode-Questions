class Solution {
public:
    int search(vector<int>& nums, int target) {

        int s=0;
        int e= nums.size()-1;
        int mid = s+(e-s)/2;
        int last=e;
        
        while(e>s){
            if(nums[mid]>=nums[0]){
                s=mid+1;

            }
            else{
                e=mid;
            }
            mid = s+(e-s)/2;
        }
        int pivot =nums[s];

        if(target>=pivot && target<=nums[last]){
            int s1=s;
            int e1=last;
            int mid1=s1+(e1-s1)/2;

            while(e1>=s1){
                if(target==nums[mid1]){
                    return mid1;
                }
                else if(target>nums[mid1]){
                    s1=mid1+1;
                }
                else{
                    e1=mid1-1;
                }
                mid1=s1+(e1-s1)/2;
            }
            return -1;
        }
        else{
            int s2=0;
            int e2=s-1;
            int mid2=s2+(e2-s2)/2;

            while(e2>=s2){
                if(target==nums[mid2]){
                    return mid2;
                }
                else if(target>nums[mid2]){
                    s2=mid2+1;
                }
                else{
                    e2=mid2-1;
                }
                mid2=s2+(e2-s2)/2;
            }
            return -1;
        }
        
    }
};