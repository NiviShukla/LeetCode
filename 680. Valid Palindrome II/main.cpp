class Solution {
public:
    /*
    We check if the string is palindrome or not by the conventional method
    */
    bool check(string s, int i , int j)
    {
        while( i < j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }

    /*
    ATQ,
    we can delete at most 1 element from the string to convert it into a palindrome
    So we take two pointers as usual and check if the elements are equal or not
    If yes then i++ and j--
    Else we increase i by 1 index and decrease j by 1
    and then check for palindrome in check function
    We return the OR of the result of check function
    */

    bool validPalindrome(string s) {
        int i =0;
        int j = s.size()-1;
        while( i < j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else return check(s,i+1,j) || check(s,i,j-1);
        }
        return true;
    }
};
