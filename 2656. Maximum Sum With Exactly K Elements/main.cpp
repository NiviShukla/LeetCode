class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        /*
        sort the array and we get the max number in the end
        after that we iterate for k steps and add it to the sum
        and return the answer
        */
        int e=nums.size()-1;
        while(k>0)
        {
            sum+=nums[e];
            nums[e]++;
            k--;
        }
        return sum;
    }
};
