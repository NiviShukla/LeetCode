class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        /*
        we take 2 pointers f and s with f at nums[0] and s at nums[1]
        if the two are same we increase s
        else f is increased and value at f changes to value at s to put unique element
        and count is increased
        to return the length of unique set
        */
        int f=0,s=1;
        while(f<nums.size() && s<nums.size())
        {
            if(nums[f] == nums[s])
            {
                s++;
            }
            else
            {
                f++;
                nums[f]= nums[s];
                count++;
            }
        }
        return count+1;
    }
};
