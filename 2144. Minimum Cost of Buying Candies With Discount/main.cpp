class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int i = cost.size()-1;
        int ans = 0;

        /*
        First we sort the array and we have to take two candies and then skip the third from last.
        Ex: [6,5,7,2,9,2]
        After sorting [2,2,5,6,7,9]
        As we can take a candy free if it is <= the minimum of last two candies
        So if we take 7 and 9 we can take 6 for free then again if we take 2 and 5 we can take 2 for free
        We only paid for 7+9+5+2 = 23
        So we add last and second last and then skip the third and again the same process
        */
        while( i> 1)
        {
            ans += cost[i--];
            ans += cost[i--];
            i--;
        }
        /*
        The above case is for all the array sizes that are greater than 1 because we will not be able to skip the third array
        For array that has size 1
        We simple add the cost
        It will be the minimum*/

        while(i >=0 )
        {
            ans += cost[i--];
        }
        return ans;


    }
};
