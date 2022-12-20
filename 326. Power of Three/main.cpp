class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n>=3)
        {
            /*
            checking if the remainder is not 0
            then return false
            */
            if(n%3 != 0)
            return false;
            /*
            decreasing n by dividing by 3 to get the quotient
            EX:
                n= 27
                then 27/3= 9(0) then 9/3=3(0) then 3/3=1(0)
                in bracket is remainder
                which we checked in line 10
            EX:
                n=10
                then 10/3=3(1) as remainder is 1 then not a power of 3
            */
            n = n/3;
        }
        if (n == 1)
        return true;

        else
        return false;
    }
};
