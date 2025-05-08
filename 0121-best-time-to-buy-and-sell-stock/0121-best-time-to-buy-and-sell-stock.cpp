class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyPrice = prices[0];

        for (int i = 1; i < prices.size(); i++){
            if (buyPrice > prices[i]){
                buyPrice = prices[i];
            }
            maxProfit = max(maxProfit, prices[i] - buyPrice);
        }
        return maxProfit;
    }
};