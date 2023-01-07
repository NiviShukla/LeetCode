class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> s;
        /*
        we traverse through the box in 1 iteration
        to get the result
        first we traverse through the row and check in the set if the number is present or not
        if not then it is inserted
        same for column and thne for box
        else it returns false
        i.e. the number has been repeated and it is not a valid sudoku
        */

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j] != '.')
                {
                    string row="row"+to_string(i)+board[i][j];
                    string col="col"+to_string(j)+board[i][j];
                    string box="box"+to_string((i/3)*3+j/3)+board[i][j];

                    if(s.find(row)==s.end() && s.find(col)==s.end() && s.find(box)==s.end())
                    {
                        s.insert(row);
                        s.insert(col);
                        s.insert(box);
                    }
                    else
                    return false;
                }
            }
        }
        return true;
    }
};
