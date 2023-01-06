class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*
        there will always be a strictly increasing side on either side of the pivot
        because at pivot the graph goes down and increase
        */

        int n=nums.size();
        int l= 0;
        int r = n-1;
        int mid;
        /*
        we check for the middle element
        EX: [4,5,6,7,0,1,2]
        here mid = 7
        nwo we check for the strictly increasing side to check the pivot point
        as here strictly increasing side is l to mid
        if not then we check on other side of the mid
        we check if target is between them if yes
        binary search again from l to r = mid -1
        else from l =mid +1  to r
        */

        while(l<=r)
        {
            mid = (l+r)/2;

            if(nums[mid] == target)
            return mid;

            else if(nums[mid] >=nums[l])
            {
                if(target >=nums[l] && target<=nums[mid])
                {
                    r = mid-1;
                }
                else
                l= mid +1;
            }
            else
            {
                if(target <= nums[r] && target >= nums[mid])
                {
                    l= mid+1;
                }
                else
                r= mid-1;
            }
        }
        return -1;
    }
};
