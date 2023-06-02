class Solution {
public:

    bool solve(string &s, string &p, int i, int j,vector<vector<int>> &dp)
    {
        /*
        We take different base cases for the question
        as we are starting from the back,we check if i and j are 0 then return true
        if string gets empty but not pattern or vice versa then return false
        if pattern has * we check for it and return true
        */
        if(i<0 && j < 0)
        return true;

        if(i>=0 && j < 0)
        return false;

        if(i<0 && j >=0)
        {
            for(int k=0;k<=j;k++)
            {
                if(p[k] != '*')
                return false;
            }
            return true;
        }
        if(dp[i][j] != -1)
        return dp[i][j];

        /*
        3 cases that are created are
        1: if the string and pattern are having same characters or pattern has '?
        then we decrease i and j both
        2: if pattern has a '*' then we decrease i once and j once
        3: if string and pattern do not match at a point
        */

        if(s[i] == p[j] || p[j] == '?')
        return dp[i][j] = solve(s,p,i-1,j-1,dp);

        else if(p[j] == '*')
        return dp[i][j]=(solve(s,p,i-1,j,dp) || solve(s,p,i,j-1,dp));

        else
        return false;

        /*
        We create a 2-d vector dp for memoization of length string and pattern
        if it has been traversed then we do not traverse it again for time limit
        and it dp[i][j] != -1 then return the value at dp[i][j]
         */
    }
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.length(),vector<int>(p.length(),-1));
        return solve(s, p, s.length()-1,p.length()-1,dp);
    }
};
