class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyday=0;
        int sellday=1;
        int maxProfit=0;
        while(sellday<prices.size())
        {
            if(prices[buyday]<prices[sellday]){
                int profit=prices[sellday]-prices[buyday];
                maxProfit=max(maxProfit,profit);
            }
            else{
                buyday=sellday;
            }
            sellday++;
        }
        return maxProfit;
    }
};
