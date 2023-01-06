class Solution {
public:
/*
checking for first occurance in the vector
if mid is target then we go to left part to find the first occurance
*/
int first(vector<int>& nums,int target)
{
    int s=0,e=nums.size()-1;
    int ans =-1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(nums[mid] == target)
        {
            ans=mid;
            e = mid-1;
        }
        else if(target < nums[mid])
        {
            e=mid-1;
        }
        else if(target > nums[mid])
        {
            s=mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}
/*
checking for last occurance in the vector
if mid is target then we go to right part to find the last occurance
*/
int last(vector<int>& nums,int target)
{
    int s=0,e=nums.size()-1;
    int ans =-1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(nums[mid] == target)
        {
            ans=mid;
            s = mid +1;
        }
        else if(target < nums[mid])
        {
            e=mid-1;
        }
        else if(target > nums[mid])
        {
            s=mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,target));
        ans.push_back(last(nums,target));

        return ans;
    }
};
