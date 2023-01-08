class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore Visiting Algorithm
        int count =0;
        int ele=0;
        /*
        using count to keep track of all the elements
        EX: [2,2,1,1,1,2,2]
        Here first count=0 ans ele =2
        then as num = ele
        count =2
        at nums[2] = 1
        num != ele i.e. 2
        then count = 1
        then count =0 as num = 1 and ele =2
        then new ele = 1 at nums[4]
        count = 1 then num = 2
        and ele = 1 then count =0
        now change again
        ele = 2 and count = 1
        */
        for(int num : nums)
        {
            if(count == 0)
            {
                ele = num;
            }
            if(num == ele)
            {
                count+=1;
            }
            else
            count-=1;
        }
        return ele;

    }
};
