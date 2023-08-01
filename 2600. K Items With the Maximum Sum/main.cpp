class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans = 0;
        vector<int> dummy;
        /*
        We take a dummy vector and push all the numbers into it
        Ex: numOnes =6 , numZeros = 6, numNegOnes  =6, k = 13
        then dummy = [1,1,1,1,1,1,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1]
        Now k =13 so we add till k-1 index and return the answer
        ans = 5 and not 6 because we need to do k moves and in k = 13 moves
        It will be the maximum sum that can be possible taking all 1 and 0 and then only 1 NegOnes
        */
        for(int i =0;i<numOnes;i++)
        {
            dummy.push_back(1);
        }
        for(int i =0;i<numZeros;i++)
        {
            dummy.push_back(0);
        }
        for(int i =0;i<numNegOnes;i++)
        {
            dummy.push_back(-1);
        }
        for(int i = 0;i<k;i++)
        {
            ans += dummy[i];
        }
        return ans;
    }
};
