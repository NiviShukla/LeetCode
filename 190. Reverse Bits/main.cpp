class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        /*
        first we check for the last digit
        EX: n = 5 then in binary it is 00...00101 (32 bits)
        now n & 1 = 1 at last index giving 1
        we right shift n for next bit
        rev OR ans is returned
        */
        for(int i =0;i<32;i++)
        {
            uint32_t lsb = n & 1;
            uint32_t rev= lsb << (31 -i);
            ans = ans | rev;
            n = n >> 1;
        }
        return ans;
    }
};
