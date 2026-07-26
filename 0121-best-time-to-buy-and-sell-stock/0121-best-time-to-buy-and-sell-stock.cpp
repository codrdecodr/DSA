class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int max_profit = INT_MIN;
        int profit = 0;
        while(buy < sell && sell < prices.size()){
            profit = prices[sell] - prices[buy];
            max_profit = max(max_profit,profit);
            if(profit < 0){
                buy = sell;
            }
            sell++;
        }
        return (max_profit == INT_MIN || max_profit < 0)? 0 : max_profit;
    }
};