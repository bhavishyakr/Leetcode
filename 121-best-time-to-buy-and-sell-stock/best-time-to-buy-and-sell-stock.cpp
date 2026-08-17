class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m_buy = prices[0];
        int max_profit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<m_buy){
                m_buy = prices[i];
            }
            max_profit = max(max_profit , prices[i]-m_buy);
        }
        return max_profit;
    }
};