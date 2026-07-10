class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();

        // vector<int> prefix(n);
        // vector<int> suffix(n);
        vector <int> ans(n, 1);

        // prefix[0]=1;
        // suffix[n-1]=1;
        int prefix=1;
        int suffix=1;

        for(int i=1;i<n;i++){
            prefix = prefix * nums[i-1];
            ans[i]=ans[i] * prefix;
        }
        for(int i=n-2;i>=0;i--){
            suffix=suffix*nums[i+1];
            ans[i]=ans[i] * suffix;
        }

        // for(int i=0;i<n;i++){
        //     ans.push_back(prefix[i]*suffix[i]);
        // }
        return ans;
    }
};