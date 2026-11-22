class Solution {
public:
     int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;
        int len = 0;
        for(int i = 0; i < n ; i++){
            len = 0;
            if(nums[i] == 1){
                len = 1;
                while(i < n-1 && nums[i+1] == 1){
                    len++;
                    i++;
                }
            }
            maxLen = max(maxLen,len);
        }
        return maxLen;
    }
};