class Solution {
public:
    /*
    We take the string and check for 'X' if its X we increase ans and change s[i] = 'O'
    Then we check for the next two indexes if they are in bound then we change the value to 'O'
    And return the ans
    */
    int minimumMoves(string s) {
        int ans = 0;
        for(int i =0;i<s.length();i++)
        {
            if(s[i] == 'X')
            {
                ans++;
                s[i] = 'O';
                if(i+1 < s.length())
                s[i+1] = 'O';
                if(i+2 < s.length())
                s[i+2] = 'O';
            }
        }
        return ans;
    }
};
