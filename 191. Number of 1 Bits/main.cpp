class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans =0;
        uint32_t check=1;
        /*
        we check each of the bits from right side and get AND operator with n
        if its 1 ans++
        and then right shift n to get next bit
        */
        for(int i=0;i<32;i++)
        {
            int  d = n & check;
            if( d == 1)
            ans++;

            n =n >> 1;
        }
        return ans;
    }
};
