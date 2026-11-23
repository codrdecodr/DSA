class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLen = 0;
        int prefix = 0;
        unordered_map<int, int> mpp;
        mpp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                prefix -= 1;
            } else {
                prefix += 1;
            }
            if (mpp.count(prefix)) {
                maxLen = max(maxLen, i - mpp[prefix]);
            } else {
                mpp[prefix] = i;
            }
        }
        return maxLen;
    }
};