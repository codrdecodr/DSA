class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> st, et;
        for (const auto& it : intervals) {
            st.push_back(it[0]);
            et.push_back(it[1]);
        }
        sort(st.begin(), st.end());
        sort(et.begin(), et.end());
        int end_ptr = 0, grps = 0;
        for (int start : st) {
            if (start > et[end_ptr]) {
                end_ptr++;
            } else {
                grps++;
            }
        }
        return grps;
    }
};