class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        /*
        we start from 2nd element and then take current and previous element
        if current <= previous then current is updated to previous+1
        then answer is updated as current - nums[i] giving the new number of operations taken
        the nums[i] is updtaed to new current
        */
        for(int i = 1;i<nums.size();i++)
        {
            int prev = nums[i-1];
            int curr = nums[i];

            if(curr <= prev)
            {
                curr = prev+1;
                ans += (curr - nums[i]);
                nums[i] = curr;
            }
        }
        return ans;
    }
};
