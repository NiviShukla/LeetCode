class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        /*
        First we check for the edge cases we have to find the maximum topmost element after K moves
        1. if there is only 1 element and operations are 2
        Then we cannot delete as there are only one element
        */
        if(nums.size()==1 && k%2)
        return -1;

        /*
        2. if the operations is only 1 then we can only delete the first element
        So return nums[1]
        */

        if(k == 1)
        return nums[1];


        int maxi =0;

        /*
        Now we check for other edge cases:
        3. If the operations is more than nums.size() then we just store the
        Largest element in the vector and return it
        4. If operations is less than nums size then we have to check 2 things:
        (a) After deleting all the elements through operations do we have the largest element then return it
        (b) On deleting if we find element bigger than rest so we just add it back and return it
        */

        if(k > nums.size())
        {
           for(int i = 0;i<nums.size();i++)
            {
                maxi = max(maxi,nums[i]);
            }
            return maxi;
        }


        else if(k == nums.size())
        {
            for(int i = 0;i<k-1;i++)
            {
                maxi = max(maxi,nums[i]);
            }
            return maxi;
        }

        else
        {
            for(int i = 0;i<k-1;i++)
            {
                maxi = max(maxi,nums[i]);
            }
            return max(maxi,nums[k]);
        }
    }
};
