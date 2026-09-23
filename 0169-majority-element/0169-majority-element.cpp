class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int cand = 0;
        for(int i = 0; i < n; i++){
            if(cnt == 0) cand = nums[i];
            if(nums[i] == cand) cnt++;
            else{
                cnt--;
            }
        }
        return cand;
    }
};