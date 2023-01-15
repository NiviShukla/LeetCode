class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        /*
        first we transpose the matrix
        EX: |1 2 3|    |1 4 7|
            |4 5 6| => |2 5 8|
            |7 8 9|    |3 6 9|
            this is done by swapping
            as i goes by 1 2 3
            the rows become column
        */
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        /*
        we reverse each row 1 by 1
        i.e. |1 4 7|
             |2 5 8|
             |3 6 9|
             each row is reversed
             1 4 7 becomes 7 4 1
             2 5 8 becomes 8 5 2
             3 6 9 becomes 9 6 3
        Giving the rotated matrix in 90 deg
        */
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
