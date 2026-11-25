class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double avg = 0;
        double maxAvg = INT_MIN;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            avg = sum / k;
        }
        maxAvg = max(maxAvg, avg);
        int l = 0;
        for (int r = k; r < nums.size(); r++) {
            sum = sum + nums[r] - nums[l];
            l++;
            avg = sum / k;
            maxAvg = max(maxAvg, avg);
        }
        return maxAvg;
    }
};