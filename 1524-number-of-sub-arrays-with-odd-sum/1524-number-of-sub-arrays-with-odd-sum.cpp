class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long cnt = 0;
        long long prefixSum = 0;
        long long odd = 0;
        long long even = 1;
        for (int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];
            if (prefixSum % 2 == 0) {
                cnt += odd;
                even++;
            } else {
                cnt += even;
                odd++;
            }
        }
        cnt %= 1000000007;
        return cnt;
    }
};