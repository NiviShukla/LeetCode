class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        /*
        we are using two pointers slow and fast
        as there is a duplicate number so there is a cycle in the array
        moving slow by 1 and fast by 2 blocks we create the cycle
        till they are at the same element
        */
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        /*
        Taking fast back to nums[0]
        and traversing both slow and fast form where they are
        as there is a cycle created in do-while loop
        they will meet at a point
        that is the duplicate element
        */
        fast = nums[0];
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
