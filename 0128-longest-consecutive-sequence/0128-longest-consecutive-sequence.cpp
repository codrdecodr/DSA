class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLen = INT_MIN;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int num : st){
            if(st.find(num - 1) == st.end()){
                int currLen = 1;
                int currNum = num;
                while(st.find(currNum + 1) != st.end()){
                    currNum++;
                    currLen++;
                }
                maxLen = max(maxLen,currLen);
            }
        }
        return (maxLen != INT_MIN)? maxLen : 0;
    }
};