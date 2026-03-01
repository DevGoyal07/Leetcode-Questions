class Solution {
public:
    bool check(vector<int>& nums) {
        int check=0;
        if(nums[nums.size()-1]>nums[0]){
            check++;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                check++;
            }
            
        }
        if(check<=1){
            return true;
        }
        else{
            return false;
        }
        
    }
};