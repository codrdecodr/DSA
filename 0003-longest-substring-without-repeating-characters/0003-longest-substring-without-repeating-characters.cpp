class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int left = 0,right = 0;
        unordered_set<char> st;
        while(left <= right && right < s.size()){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            right++;
            maxLen = max(maxLen,right - left);
        }
        return maxLen;
    }
};