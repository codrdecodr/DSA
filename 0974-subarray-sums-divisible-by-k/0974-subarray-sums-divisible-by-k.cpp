class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt = 0;
        int pmod = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            pmod = (pmod + nums[i] % k + k) % k;
            cnt += mpp[pmod];
            mpp[pmod]++;
        }
        return cnt;
    }
};