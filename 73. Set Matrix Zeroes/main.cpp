class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1, rows=matrix.size(), cols = matrix[0].size();
        /*
        first we traverse through 1st column to check if there is a 0
        then col0 is marked 0
        then traversing the matrix to check for 0
        if there is a 0 then the 1st row and column is marked 0
        i.e. matrix[i][0] and matrix[0][j]
        */
        for(int i =0;i<rows;i++)
        {
            if(matrix[i][0] == 0)
            {
                col0 = 0;
            }
            for(int j = 1;j<cols;j++)
            {
                if(matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
            }
        }
        /*
        after traversing and marking the first row and column with 0
        we traverse backward
        this is to not make matrix[i][0] with 0 if col0 is 0
        because it will make entire row 0
        lastly we check if col0 is 0
        then matrix[i][0] is marked 0
        */

        for(int i = rows -1;i>=0;i--)
        {
            for(int j =cols-1;j>=1;j--)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;

            }
                   if(col0 == 0)
                matrix[i][0] = 0;
        }
    }
};
