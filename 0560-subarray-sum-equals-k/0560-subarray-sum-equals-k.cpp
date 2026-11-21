class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int prefixSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            int remove = prefixSum - k;
            cnt += mpp[remove];
            mpp[prefixSum]++;
        }
        return cnt;
    }
};