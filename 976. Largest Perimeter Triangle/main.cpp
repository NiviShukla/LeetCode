class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        /*
        We start by sorting the line size
        after sorting we know for a triangle to form sum of two sides should be greated than the third
        As the lines are sorted and we need the largest perimeter
        we traverse from the end of the vector to get the largest perimeter
        if the condition satisfy we return the sum
        */
        int ans=0;
        for(int i=nums.size()-1;i>1;i--)
        {
            if(nums[i] < nums[i-1] + nums[i-2])
            return nums[i] +nums[i-1] +nums[i-2];
        }
        return 0;
    }
};
