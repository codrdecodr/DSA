class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        reverse(s.begin(),s.end());
        for(int i = 0; i < s.size();i++){
            string word = "";
            while(i < s.size() && s[i] != ' '){
                word += s[i];
                i++;
            }
            if(word.size() > 0){
                reverse(word.begin(),word.end());
                ans += ' ' + word;
            }
        }
        return ans.substr(1);
    }
};