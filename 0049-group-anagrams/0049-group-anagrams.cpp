class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;
        for (string x : strs) {
            string word = x;
            sort(x.begin(), x.end());
            mpp[x].push_back(word);
        }
        for (auto it : mpp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};