class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>row(n,0),col(n,0);
        /*
        first we find the max value in a row and a column
        so that the skyline doesnot change
        we update the row and col vector accordingly
        */
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                row[i] = max(row[i],grid[i][j]);
                col[j] = max(col[j],grid[i][j]);
            }
        }
        int ans = 0;
        /*
        Now we traverse the grid
        check for minimum value of the row and col and
        subtract the height of the building i.e. grid[i][j]
        then add it to the ans to get the maximum number of changes
        without changing the skyline
        */
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans += (min(row[i],col[j])-grid[i][j]);
            }
        }
        return ans;
    }
};
