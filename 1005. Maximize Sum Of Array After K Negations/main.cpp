class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        /*
        First we sort the vector to get the negative values in the start
        After that we traverse and negate the required k times the starting of the vector
        If there are no negative element then we have to negate the positive elements
        */
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size() && k >0;i++)
        {
            if(nums[i] < 0)
            {
                nums[i] = -nums[i];
                k--;
            }
            else break;
        }
        /*
        We sort the vector again to get the negatives at first and traverse from index 1
        This is because ATQ, we can negate an element multiple times
        So to find the largest sum we will negate some elements twice or thrice
        So that we can get the maximum sum
        */
        sort(nums.begin(),nums.end());
        int ans =0;
        for(int i =1; i<nums.size();i++)
        {
            ans +=nums[i];
        }

        if(k %2 == 0) ans += nums[0];
        else ans -= nums[0];
        return ans;
    }
};
