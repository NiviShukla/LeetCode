class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        /*
        As we need the maximum sum of subarray, we can sort the vector
        Take out the sum from behind and check with the actual sum
        Till when we are getting a sum less than actual sum we keep adding nums[i] to ans
        When the sum is greater than the actual sum
        We come out of the loop so that no more numbers would be added to ans
        */
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int total=0;
        for(int i =0;i<nums.size();i++)
        {
            total += nums[i];
        }
        int dummy = 0;
        for(int i= nums.size()-1;i >=0;i--)
        {

            dummy += nums[i];
            ans.push_back(nums[i]);
            if(dummy > (total - dummy))
                break;
        }
        return ans;
    }
};
