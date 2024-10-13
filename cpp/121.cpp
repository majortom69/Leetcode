class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  l =0, r = 1;
        int mProfit = 0;

        while( r < prices.size()) {
            if(prices[r] > prices[l]) {
                mProfit = std::max(prices[r] - prices[l], mProfit);
            } else {
                l = r;
            }
            r++;
        }
        return mProfit; 
    }
};