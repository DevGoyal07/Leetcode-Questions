class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            // Compare mid with the LAST element (e), not the first (0)
            if (nums[mid] > nums[e]) {
                // Minimum is in the right part
                s = mid + 1;
            } else {
                // Minimum is mid or in the left part
                e = mid;
            }
        }
        return nums[s];
    }
};