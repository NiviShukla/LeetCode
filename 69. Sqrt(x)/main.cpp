class Solution {
public:
    int mySqrt(int x) {
        //taking a start and end for binary search
        long long st = 0, en = INT_MAX, ans;

        while(st <= en)
        {
            long long mid = (st +en) /2;
            /*checking if mid*mid is less or equal to given x
            Ex -> x = 64
            then mid will start with st = 0 and en = INT_MAX
            will check till mid*mid is <= 64
            If mid = 4 then mid*mid is 16 < 64 then st = 4+1 =>5
            then check for 5
            */
            if( mid*mid <= x)
            {
                ans = mid;
                st = mid+1;
            }
            else
            en = mid -1;
        }

        return ans;
    }
};
