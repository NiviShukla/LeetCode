class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1)
        return s;
        int max=1;
        int n = s.length();
        int st = 0, en = 0;
        /*
        First we check for odd palindrome substring
        l and r are at 0 then 1 then 2.. index
        moving left and right to check bigger palindromic substring
        if there is no such substring
        it returns 1
        */
        for(int i=0;i<n-1;++i)
        {
            int l = i, r = i;
            while(l >=0 && r< n)
                    {
                      if(s[l] == s[r])
                        {
                             l--;
                             r++;
                        }
                        else
                          break;
                    }

            int len = r-l-1;
            if(len > max)
            {
                max = len;
                st = l+1;
                en = r-1;
            }
        }
        /*
        same for even
        here l is at i and r is at i+1
        they check for 2 substrings
        if not then return 1
        */

        for(int i =0;i<n-1;++i)
        {
            int l = i,r= i+1;
            while(l >=0 && r< n)
                    {
                      if(s[l] == s[r])
                        {
                             l--;
                             r++;
                        }
                        else
                          break;
                    }

            int len = r-l-1;
            if(len > max)
            {
                max = len;
                st = l+1;
                en = r-1;
            }
        }
        return s.substr(st,max);
    }
};
