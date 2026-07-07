class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        set<char> st;
        int left = 0,right = 0;
        int len = 0;
        int maxLen = INT_MIN;
        while(left <= right && right < s.size()){
            if (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
                len = right - left;
                
            }else{
                st.insert(s[right]);
                right++;
                len = right - left;
                maxLen = max(maxLen, len);
            }
            
        }
        return maxLen;
    }
};