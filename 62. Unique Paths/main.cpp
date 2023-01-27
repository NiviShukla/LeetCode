class Solution {
public:
    int uniquePaths(int m, int n) {
        /*
        we take a matrix of the same size
        then traverse from robot to the star counting the number of ways to reach it
        EX: m = 3 n =7
        for i and j = 0 i.e. the first row and first column there is only 1 way
        so dp[i=0][j=0] = 1
        now we add up all the other possible ways for reaching star
        in the similar pattern adding up the ways till we reach the star
        at dp[1][1] = ways are dp[1][0] + dp[0][1] = 1+ 1= 2
        and this goes on
        */
        int dp[m][n];
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 1;
                }
                else
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
};
