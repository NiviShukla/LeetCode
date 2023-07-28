class Solution {
public:
    vector<int> partitionLabels(string s) {
        /*
        We take a has map to store the last index of each character in s
        Ex:For "eccbbbbdec"
        e: 8
        c: 9
        b: 6
        d: 7
        */
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            mp[ch] = i;
        }
        /*
        Now we take two pointers prev and maxi to check for the last occurance to create a part and store it in ans
        */
        vector<int> ans;
        int prev = -1;
        int maxi = 0;

        /*
        We iterate through the string and change maxi to the maximum index of a character
        to make a partition when maxi == i then we push the difference of maxi and prev to ans so we can get the length of the part
        */

        for(int i=0;i< s.size();i++)
        {
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i)
            {
                ans.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return ans;
    }
};
