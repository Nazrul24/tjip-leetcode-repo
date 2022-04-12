class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int len = prices.size();
        int sell = prices[len-1];
        int buy = prices[len-1];
        for(int i=len-1;i>=0;i--){
            if(prices[i]>sell) sell=prices[i];

            buy = prices[i];
            if(sell>buy){
                profit+=(sell-buy);
                sell = buy;
            }

        }
        return profit;
    }
};
