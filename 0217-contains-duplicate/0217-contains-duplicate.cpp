class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(int x : nums){
            if(mp.count(x)){
                return true;
            }
            mp.insert(x);
        }
        return false;
    }
};