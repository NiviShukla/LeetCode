class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak =0;
        int size = nums.size() -1;
        //only 1 element
        if(size == 0)
        return 0;
        for(int i= 0;i<=size;i++)
        {
            //checking for 1st element only next neighbour
            if(i == 0)
            {
                if(nums[i] > nums[i+1])
                peak = i;
            }
            //checking for last element only previous neighbour
            else if(i == size)
            {
                if(nums[i] > nums[i-1])
                peak = i;
            }
            else
            {
                if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
                 peak = i;
            }
        }
        return peak;
    }
};
