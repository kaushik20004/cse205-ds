class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n<2)
        return 0;
        int maxProfit= 0;
        int minPrices = prices[0];
        for(int i = 1; i<n; i++){
        maxProfit = max(maxProfit, prices[i]-minPrices);
        minPrices = min(minPrices, prices[i]);
        }
        return maxProfit;
    }
};