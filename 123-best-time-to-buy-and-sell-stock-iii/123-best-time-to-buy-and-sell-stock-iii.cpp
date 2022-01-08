class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int pmin;
        int smax;
        vector<int>prefix_profit(n);
        vector<int>suffix_profit(n);
        
        pmin = prices[0];
        prefix_profit[0]=0;
        for(int i=1;i<n;i++)
        {
            prefix_profit[i] = max(prefix_profit[i-1],prices[i]-pmin);  
            pmin = min(pmin,prices[i]);
        }
        
        smax = prices[n-1];
        suffix_profit[n-1] =0;
        for(int i=n-2;i>=0;i--)
        {
            suffix_profit[i] = max(suffix_profit[i+1],smax-prices[i]);
            smax = max(smax,prices[i]);
        }
        int profit = suffix_profit[0];
        for(int i=1;i<n;i++)
        {
            int profit_two = prefix_profit[i-1] + suffix_profit[i];
            profit = max(profit,profit_two);
        }
        return profit;
    }
};