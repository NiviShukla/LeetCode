class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        /*
        We start with checking for all even coins and odd coins at position
        As it will cost 0 so we sum up all them indivisually i.e even sums and odd sums
        After this we have to move them to other counter
        Now ATQ, we need minimum steps
        We take minimum sum of either odd or even total
        */
        int even = 0;
        int odd = 0;
        for(int i  = 0;i<position.size();i++)
        {
            if(position[i] % 2 == 0)
            ++even;

            else
            ++odd;
        }
        return min(even,odd);

    }
};
