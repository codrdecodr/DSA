class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3) return n;
        int prev1 = 2, prev = 3;
        for (int i = 4; i <= n; i++) {
            int curr = prev1 + prev;
            prev1 = prev;
            prev = curr;
        }
        return prev;
    }
};