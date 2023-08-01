class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        /*We take the size of rowSum and colSum to iterate through them
        We find the minimum of the either and push it into the ans[i][j]
        Then we subtract the minimum from the rowSum or the colSum
        Either of the two will be 0 then we move ahead
        Ex: rowSum = [5,7,10], colSum = [8,6,8]
           8 6 8
        5  - - -
        7  - - -
        10 - - -
        When i = 0, j = 0
        then we check 5 < 8
        so ans[0][0] = 5 and
        rowSum[0] - 5 = 0 and colSum [0] - 5 = 3
        as rowSum[0] = 0 so i++
        Now we check for rowSum[1] = 7 and colSum[0] = 3
        as 3 < 7 so ans[1][0] = 3
        and 3 is subtracted from both this time colSum[0] = 0
        so j++
        Now we check for rowSum[1] and colSum[1] and so on
        */
        int row = rowSum.size();
        int col = colSum.size();
        vector<vector<int>> ans(row, vector<int>(col, 0));
        int i =0 ,j =0;
        while(i < row && j < col)
        {
            int check = min(rowSum[i], colSum[j]);
            ans[i][j] = check;
            rowSum[i] -= check;
            colSum[j] -= check;
            if(rowSum[i] == 0)
            i++;
            if(colSum[j] == 0)
            j++;
        }
        return ans;

    }
};
