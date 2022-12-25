class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        /*
        We take two parts left and right of the element
        to calculate the ans
        */

        int product =1;
        /*calculating the left vector
        Ex: nums = [1,2,3,4]
        ans = [1,2,6,12]
        this is the cumulative vector i.e elements that are product on the left side
        for 1 it is 1
        for 2 it is 1*2=2
        for 3 it is 2*3=6
        for 4 it is 3*4=12
        */
        for(int i =0;i<n;++i)
        {
            product *= nums[i];
            ans.push_back(product);
        }

        product = 1;
        /*
        Taking the right side for calculating the ans
        traversing from right
        taking the cumulative array in use
        multiplying it with right side that is stored as product in line 36
        */
        for(int i =n-1;i>0;--i)
        {
            ans[i] = ans[i-1]*product;
            product *= nums[i];
        }
        ans[0] = product;
        return ans;
    }
};
