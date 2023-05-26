class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size(), curr= 0, ans = 0, next = 0;
        /*We check for current index and the next largest index that we can jump
        we iterate through the array and check for each index if next is farthest
        if yes then we iterate till the nums[i] index and then change the jump and current
        Ex:[2,3,1,1,4]
        for i=0 we can jump till 2+0=2 so farthest we can go is till index 2
        then current = next and when i=1 we can go farthest to nums[1]+1 i.e 3+1=4
        next=4
        but we do not change jump till we have iterated to i=2 then we change jumps
        */
        for(int i =0;i < len-1;i++)
        {
         next = max(next, nums[i] + i);

            if(i == curr)
            {
                curr = next;
                ans++;

            }
        }
        return ans;

    }
};
