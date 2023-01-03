class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //taking two pointers left and right
        int l=0, r=1, maxProfit=0;
        while(r<prices.size()) {
            /*
            we check if at given point price[l]<price[r]
            then profit is max of last profit or new difference
            else
            l comes to r index and r is increased
            i.e. it is the new buying day and we check for new selling day for max profit
            */
            if(prices[l]<prices[r])
            maxProfit=max(maxProfit, prices[r]-prices[l]);

            else
            l=r;

            ++r;
        }
        return maxProfit;
    }
};
