class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, mini = prices[0];
        for(int i=1;i < prices.size();i++){
            mini = min(mini, prices[i]);
            int diff = prices[i] - mini;
            maxi = max(maxi, diff);
        }
        return maxi;

    }
};