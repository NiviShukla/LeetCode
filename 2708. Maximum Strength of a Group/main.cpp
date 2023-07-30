class Solution {
public:
    long long maxStrength(vector<int>& nums) {
      /*
      First we check for edge case if there is only 1 element in nums so we print it
      */
      if(nums.size() == 1)
      return nums[0];

      /*
      Now we check for the negative counts and total product
      We take lne Largest Negative Element
      We take le Largest Element
      We iterate through nums and check if the number is positive or negative
      if its negative we increase negative count i.e. neg++
      And also store the largest negative element in lne value being the smallest
      Then we check if the number is non- negative and make the product
      */

      int neg= 0;
      int lne = INT_MIN;
      int le = INT_MIN;
      long long ans = 1;
      for(int i =0;i<nums.size();i++)
      {
          if(nums[i] < 0)
          {
              neg++;
              lne = max(lne,nums[i]);
          }
          le = max(le,nums[i]);

          if(nums[i])
          ans *= nums[i];
      }
      /*
      Now we check the other edge cases
      1. If the largest element is 0 and the count of negative elements is 1 or 0
      We will return 0
      2. If the negative count is odd i.e. there are 1,3,5 etc negative elements we divide the product with the
      largest negative element i.e. smallest place value to get maximum product
      */

      if(le == 0 && neg <= 1)
      return 0;

      if(neg % 2)
      return ans/lne;


      return ans;
    }
};
