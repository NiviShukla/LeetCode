class Solution {
public:
    int balancedStringSplit(string s) {
        int bal=0;
        int left=0,right=0;
        int i=0;
        /*
        go through the string and check for L and R
        if encountered L increase left otherwise right
        only when the difference is 0 that means it is balanced
        increase bal
        return answer for it
        */
        while(i<s.length())
        {
            if(s[i] == 'L')
            {
                left++;
                i++;
            }

            else if(s[i] == 'R')
            {
                i++;
                right++;
            }

            int check = left-right;

            if(check == 0)
            {
                bal++;
            }

        }
        if(bal==0)
        return 1;

        return bal;
    }
};
