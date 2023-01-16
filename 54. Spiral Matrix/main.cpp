class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int top =0,down = m-1,left = 0,right = n-1;
        int dir =0;
        /*
        top is at matrix[0][0]
        down is at matrix[0][m-1]
        left is at matrix[0][n-1]
        right is at matrix[m-1][n-1]
        now we traverse through the matrix
        dir at 0 moves left to right i.e. [same][variable]
        at 1 it moves from top to down i.e. [variable][same]
        at 2 it moves right to left i.e. [same][variable]
        at 3 it moves down to top i.e. [variable][same]
        after traversing through
        a row from left to right then top goes 1 down
        a column from top to bottom then right goes 1 left
        a row from right to left then down goes 1 top
        a column from doen to top then left goes 1 right
        */
        while(top <=down && left <=right)
        {
            if(dir ==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top+=1;
           }
            else if( dir == 1)
            {
                for(int i=top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right-=1;
            }
            else if( dir == 2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down-=1;
            }
            else if(dir == 3)
            {
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left+=1;
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};
