class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        /*
        Ex: n = 10
        10! = 10*9*8*7*6*5*4*3*2*1 = 3628800
        here multiple of 5 are 2
        and trailing zero is 2
        one is 5 and one is 10 (5*2)
        */
        while(n>0)
        {
            n = n/5;
            count+=n;
        }
        return count;
    }
};
