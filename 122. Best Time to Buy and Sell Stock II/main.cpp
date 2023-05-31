class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        /*
        The main idea of the question is that we can buy and sell as many times we want so
        When ever the next stock value is larger than the last one
        we can buy at it and sell at the next larger value
        Ex: p=[7,1,5,3,6,4]
        at i = 1, as 7 is not less than 1 so we check for next i.e. p[i=2]=5
        now as 1 is less than 5 we sell at 5 giving profit =0+ p[i]-p[i-1]=5-1=4
        similarly we buy at 3 and then sell at 6 profit= 4+p[4]-p[3]=6-3=7
        */
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] > prices[i-1])
            {
                profit += (prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};
