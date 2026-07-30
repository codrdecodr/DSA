class Solution {
public:
    int fib(int n) {
        if(n < 2) return n;
        int f = 0, s = 1, t = 0;
        for(int i = 2; i <= n ; i++){
            t = f + s;
            f = s;
            s = t;
        }
        return t;
    }
};