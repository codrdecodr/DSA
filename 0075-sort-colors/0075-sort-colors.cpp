class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        int ind = 0;
        for(int color = 0; color < 3 ; color++){
            int freq = mpp[color];
            for(int j = 0; j < freq ; j++){
                nums[ind] = color;
                ind++;
            }
        }
    }
};