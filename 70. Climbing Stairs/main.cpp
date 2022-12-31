class Solution {
public:
    int climbStairs(int n) {
        int l1 = 1, l2 =1;
        /*
        starting from back we keep adding the ways we can reach the top
        Ex: if n = 5
        then at 5 it is 1 at 4 it is 1
        then at 3 it is 4+5 i.e. 1+1 =2 ways
        then at 2 it is 3+4 i.e. 2+1 = 3 ways
        then at 1 it is 2+3 i.e. 3+2 = 5 ways
        then at ground or 0 it is 1+2 i.e. 5+3 = 8 ways
        */
        for(int i =0;i<n-1;i++)
        {
            int temp = l1;
            l1 = l1+l2;
            l2=temp;
        }
        return l1;
    }
};
