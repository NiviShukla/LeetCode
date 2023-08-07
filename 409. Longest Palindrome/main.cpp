class Solution {
public:
    int longestPalindrome(string s) {

        /*
        First we map the count of the characters in string to their occurrence
        Then we check for two types of palindromes i.e. Even and Odd
        Even palindromes have even occurrence of each characters
        Odd palindromes have even occurrence of all characters and one odd occurrence
        So we check for the occurrence and then add it to result if it is even
        Else we add it to result and subtract 1 to make it even and mark a odd variable to true
        Now if odd is true then we add 1 to ans for the odd character occurrence
        At last we return the ans
        */
        unordered_map<char,int> mp;
        int ans = 0;
        for(int i =0;i<s.length();i++)
        {
            mp[s[i]]++;
        }

        bool odd = false;
        for(int i = 0;i<mp.size();i++)
        {
            if(mp[i] % 2 == 0)
            ans += mp[i];

            else
            {
                odd = true;
                ans += mp[i] -1;
            }

        }
        if(odd)
        ans++;

        return ans;
    }
};
