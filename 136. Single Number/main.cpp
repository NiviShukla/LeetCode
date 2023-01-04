class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        we are using XOR operation for finding the unique number
        EX:[2,2,1]
        as ^ operator works as
        A^0=A and
        A^A=0
        since other number are apprearing twice all will cancel out to zero
        and the unique num XOR 0 = numer
        i.e. 2^2^1= 0^1=1 ans
        */
        int size= nums.size();
        int ans =0;
        for(int i=0;i<size;i++)
        {
            ans =ans^nums[i];
        }
        return ans;
    }
};
