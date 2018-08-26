static auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        int pre_buy = -prices[0], buy = max(-prices[1], -prices[0]), pre_sell = 0, sell = max(prices[1] - prices[0], 0);
        for (int i = 2; i < prices.size(); i++) {
            // prev buy = buy[i-2]
            // buy = buy[i-1]
            // prev sell = sell[i-2]
            // sell = sell[i-1]
            pre_buy = buy;// pre_buy = buy[i-1] now
            buy = max(pre_sell - prices[i], buy); // buy = buy[i] now
            pre_sell = sell; // pre_sell = sell[i - 1] now
            sell = max(pre_buy + prices[i], sell); // sell = sell[i] now
        }
        return sell;
    }
};
