class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int total_gas=0,total_cost=0;
        int current = 0;
        /*
        we take the total gas and if it less than cost then we cannot make a circuit and return -1
        EX: gas =[1,2,3,4,5] cost = [3,4,5,1,2]
        as total_gas = 15 and total_cost = 15
        so we can make a circuit and answer will come
        then we check if at the current index gas price - cost is negative then we cannot move to the next gas
        as at i = 0
        gas[i] = 1 and cost[i] = 3
        so, current = -2 and we cannot move forward
        */
        for(int i=0;i<gas.size();i++)
        {
            total_gas += gas[i];
            total_cost += cost[i];
        }

        if(total_gas < total_cost)
        return -1;

        for(int i = 0;i<gas.size();i++)
        {
            current += (gas[i] - cost[i]);
            if(current <0)
            {
                start = i+1;
                current =0;
            }
        }
        return start;
    }
};
