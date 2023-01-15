class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxi=INT_MIN;
        /*
        we add the elements into sum and check it with maxi
        if the element sum becomes max then replace it
        else keep on adding
        EX:[-2,1,-3,4,-1,2,1,-5,4]
        sum =-2 then maxi = -2 nums[0]
        now sum= 0 as -2 < 0
        now sum = -1 then maxi=-1 nums[1]
        now sum = 0 as -1 < 0
        sum = -3 then maxi = -1 nums[2]
        sum = 0 as -3 < 0
        sum = 4 maxi = 4 nums[3]
        now sum  =3 maxi = 4 nums[4]
        sum = 5 then maxi = 5 nums[5]
        now sum = 6 maxi = 6 nums[6]
        then sum = 1 maxi =6 nums[7]
        then sum = 5 maxi = 6 nums[8]
        */
        for(auto it : nums)
        {
            sum +=it;
            maxi=max(sum,maxi);
            if(sum <0)
            sum =0;
        }
        return maxi;
    }
};
