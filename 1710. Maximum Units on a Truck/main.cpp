class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        priority_queue<pair<int,int>> pq;

        int count =0;

        for(vector<int> x : boxTypes)
        {
            pq.push({x[1],x[0]});
        }
        /*
        We use priority queue to sort the vector in descending order on the basis of units of box types
        on sorting we now check for count and update unit as per the count
        lastly we check if there are any extra count left and we can update unit again as per count
        */

        int unit=0;
        while(!pq.empty() && count < truckSize)
        {
            if(count+pq.top().second < truckSize)
            {
                count += pq.top().second;
                unit += pq.top().second * pq.top().first;
                pq.pop();
            }
            else
            {
                int quantity = truckSize - count;
                count += quantity;
                unit += quantity * pq.top().first;
                pq.pop();
            }
        }

        return unit;
    }
};
