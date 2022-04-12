class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = -10000000;
        int len = prices.size();
        if(len==1) return 0;

        int sell = prices[len-1];
        int buy = prices[len-2];
        int tempProfit;
        for(int i = len-2; i>=0 ;i--){
            buy = prices[i];
            tempProfit = sell-buy;
            if(tempProfit>profit){
                profit = tempProfit;

            }
            if(prices[i]>sell) sell=prices[i];

        }


        if(profit>0) return profit;
        else return 0;

    }
};

