class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int revhalf = 0;
        while (x > revhalf) {
            int digit = x % 10;
            revhalf = revhalf * 10 + digit;
            x = x / 10;
        }
        return (revhalf == x || revhalf / 10 == x);
    }
};
