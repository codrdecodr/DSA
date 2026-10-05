class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int max_len = INT_MIN;
        for(int num : st){
            if(st.find(num-1) == st.end()){
                int currNum = num;
                int currLen = 1;
                while(!st.empty() && st.find(currNum+1) != st.end()){
                    currNum++;
                    currLen++;
                }
                max_len = max(max_len,currLen);
            }    
        }
        return (max_len == INT_MIN)? 0 : max_len;
    }
};