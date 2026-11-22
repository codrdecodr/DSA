class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        mpp[0] = -1;
        int prefix = 0;
        int maxLen = 0;
        for(int i = 0;i < n; i++){
            if(nums[i] == 0){
                prefix -= 1;
            }
            else{
                prefix += 1;
            }
            if(mpp.count(prefix)){
                maxLen = max(maxLen,i - mpp[prefix]);
            }
            else{
                mpp[prefix] = i;
            }
        }
        return maxLen;
    }
};