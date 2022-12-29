class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*
        first we change any negative or 0 or any number that is bigger than size of vector
        to out of bound number
        EX: [3,4,-1,1]
        Transformed into
        [3,4,5,1]
        -1 to size(4) +1
        */
        int size = nums.size();
        for(int i = 0;i<size;i++)
        {
            if(nums[i] <=0 || nums[i] > size)
            nums[i] = size + 1;
        }
        /*
        converting all the positve element of the set to negative
        use of hashing
        Ex: we got [3,4,5,1] from above loop
        now index= abs(nums[0]=3)
        now index-- = 2
        nums[2] = 5
        becomes -5
        for nums[2] =4
        index > size
        index-- = 3
        nums[3] = 1
        becomes -1
        nums[3] = 5
        index > size
        but index -- gives 4 and nums[4] is out of bound
        now index = 1
        index --  =0
        nums[0] = 3
        becomes  -3
        now our vector is
        [-3,4,-5,-1]
        */

        for(int i = 0;i<size;i++)
        {
            int index = abs(nums[i]);
            if(index > size)
            continue;

            index--;
            if(nums[index] > 0)
            nums[index] = -nums[index];
        }
        /*
        if there is any positive integer in out=r array we return its index+1
        if there are none
        then we return size+1
        Ex:[-3,4,-5,-1]
        as 4 is positive then
        we return 1+1 = 2
        as that is the smallest positive integer in our array as 1 was present
        */
        for(int i =0;i<size;i++)
        {
            if(nums[i] >0)
            return i+1;
        }
        return size+1;
    }
};
