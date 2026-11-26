class Solution {
public:
    int func(int ind,vector<int>& nums,vector<int>& dp){
        if(ind == 0) return nums[0];
        if(ind == 1) return max(nums[0],nums[1]);
        if(dp[ind] != -1) return dp[ind];
        int take = nums[ind] + func(ind-2,nums,dp);
        int notTake = func(ind-1,nums,dp);
        return dp[ind] = max(take,notTake); 
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return func(n-1,nums,dp);
    }
};