class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            int sell = prices[ i];
            if(sell > buy){
                max_profit = max(max_profit, sell - buy);
            }else{
                buy  = sell;
            }
        }    
        return max_profit;
    }
};
