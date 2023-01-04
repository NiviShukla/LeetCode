class Solution {
public:
    int strStr(string haystack, string needle) {
        /*
        we take size of haystack and needle
        traverse from 0 to m-n+1
        Ex:
        hay=sadbutsad needle=sad
        we go from 0 to m=9 -n=3 +1 =7
        we go before 7 as at 7 the needle length will become out of bound for haystack
        then we check for substrings of length from i to size of needle if it is equal to needle
        if yes return the i i.e. index
         */
        int m=haystack.length();
        int n=needle.length();
        for(int i=0;i<m-n+1;i++)
        {
            if(haystack[i] == needle[0])
            {
                if(haystack.substr(i,n) == needle)
                return i;
            }
        }
        return -1;

    }
};
