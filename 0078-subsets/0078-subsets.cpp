class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        createss(res,0,nums,subset);
        return res;
    }
    void createss(vector<vector<int>>& res,int index,vector<int> nums,vector<int>& subset){
        if(index == nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        createss(res,index+1,nums,subset);
        subset.pop_back();
        createss(res,index+1,nums,subset);
    }
};