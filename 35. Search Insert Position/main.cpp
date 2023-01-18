class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e= nums.size()-1;
        int mid;
        /*
        we start with mid if target is at mid then mid is returned
        else if target is less then mid end is changed to mid-1
        else start is changed to mid+1
        each time the target is not found we return start as
        start changes to the next element if target > nums[mid]
        and if target < nums[mid] then end is updated but as the target is not present
        we reach to a point where target gets back to > nums[mid]
        and start is returned
        */
        while( s<=e)
        {
            mid = s+(e-s)/2;
            if(target < nums[mid])
            e = mid-1;

            else if(target > nums[mid])
            {
                s= mid+1;
            }
            else
            return mid;
        }
        return s;
    }
};
