class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int best_buy=prices[0];
        int max_profit=0;

        for(int i=1;i<prices.size();i++){

            max_profit = max(max_profit, prices[i]- best_buy);
            if(best_buy>=prices[i]){
                best_buy=prices[i];
            }
        }

        return max_profit;
        
    }
};