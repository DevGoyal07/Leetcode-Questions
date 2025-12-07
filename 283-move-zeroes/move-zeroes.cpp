class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int non_zero=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[non_zero], nums[j]);
                non_zero++;
            }
        }
    }
};