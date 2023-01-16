class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reach =0;
        /*
        for each iteration we check if reach is less than i if yes then returns false
        else reach is updated to new reach
        EX:[2,3,1,1,4]
        at i=0 reach = 0
        new reach = 2 => max(0,0+2(i.e. nums[0]) )
        now reach !< i i.e. 1
        new reach = 4 => max(2,1+3(i.e. nums[1]))
        ans we reach the end
        so it returns true
        */
        for(int i=0;i<n;++i)
        {
            if(reach < i)
            return false;
            reach = max(reach,i+nums[i]);
        }
        return true;
    }
};
