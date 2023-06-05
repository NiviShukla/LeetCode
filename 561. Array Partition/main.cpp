class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans =0;
        sort(nums.begin(), nums.end());
        /*
        First we sort the given vector
        after that we add the odd number of index into the answer
        Ex: [1,4,3,2]
        after sorting [1,2,3,4]
        then the optimal pairs are (1,2) and (3,4)
        so min(1,2) + min(3,4) = 1 + 3 = 4
        so on sorting we can say 1st and 3rd elements give the optimal solution
        */

        for(int i=0;i<nums.size();i++)
        {
            ans += nums[i++];
        }
        return ans;
    }
};
