class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        //dp[i,j] : substring starts from (i, j)
        //i 's range: [0, m], 0 means the whole string, m means empty string
        vector<vector<bool>> dp(m+1, vector(n+1, false));

        //base case when both are empty string
        dp[m][n] = true;
        /*
        dp[i][n] means when i is not equal to m:
        that means s is not empty, but p is empty,
        that's always false
        */

        for(int i = m; i >= 0; i--){
            //dp[i][n] are already set
            for(int j = n-1; j >= 0; j--){
                // cout << "(" << i << ", " << j << ")" << endl;
                bool first_match = (i < m) && (p[j] == '.' || p[j] == s[i]);

                if(j+1 < n && p[j+1] == '*'){
                    //match first char or ignore "?*" in p
                    dp[i][j] = (first_match && dp[i+1][j]) || dp[i][j+2];
                }else{
                    dp[i][j] = first_match && dp[i+1][j+1];
                }
            }
        }

        //whole string of s and whole string of p
        return dp[0][0];
    }
};
