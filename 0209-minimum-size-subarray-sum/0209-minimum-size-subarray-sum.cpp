class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;
        int left = 0, right = 0;
        int currsum = 0;
        while (left <= right && right < nums.size()) {
            currsum += nums[right];
            while(currsum >= target){
                minLen = min(minLen, right - left + 1);
                currsum -= nums[left];
                left++;
            }
            right++;
        }
        return (minLen == INT_MAX)? 0 : minLen;
    }
};