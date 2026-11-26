class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        int prev1 = nums[0];
        int prev = max(nums[0],nums[1]);
        for (int i = 2; i < n; i++) {
            int curr = max(nums[i] + prev1,prev);
            prev1 = prev;
            prev = curr;
        }
        return prev;
    }
};