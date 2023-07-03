class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0];
        int maxProfit =0;
        int profit=0;
        int n =prices.size();
        for(int i =0;i<n;i++){
            profit=prices[i]-mn;
            maxProfit=max(maxProfit,profit);
            mn=min(mn,prices[i]);
        }
        return maxProfit;
    }
};