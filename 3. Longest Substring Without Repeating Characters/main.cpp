class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //we are taking a frequencey map of size 256 because string can have 256 character
        vector<int> mp(256,-1);
        /*
        We take left and right
        to traverse and create substring between l and r
        */
        int l=0,r=0,n=s.size();
        int len = 0;
        while(r<n)
        {
            /*
            if the character is visited and repeating
            then we update left either next to repeating char
            or leave it to left if it is out of the substring
            */
            if(mp[s[r]] != -1)
            l = max(mp[s[r]] +1 , l);

            mp[s[r]] = r;
            //returns len as max of old len or new  r -l +1
            len = max(len , r-l +1);
            r++;
        }
        return len;
    }
};
