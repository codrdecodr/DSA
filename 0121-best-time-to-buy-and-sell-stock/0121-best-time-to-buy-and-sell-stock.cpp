class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int buy = 0;
        int sell = 1;
        while (buy < sell && sell < prices.size()) {
            if (prices[sell] > prices[buy]){
                maxProfit = max(maxProfit, prices[sell] - prices[buy]);
            } else {
                buy = sell;
            }
            sell++;
        }
        return (maxProfit == INT_MIN)? 0 : maxProfit;
    }
};