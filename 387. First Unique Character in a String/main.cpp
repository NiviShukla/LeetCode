class Solution {
public:
    int firstUniqChar(string s) {
        //creating map for all 26 letter occurance
        int map[26]= {0};
        //char c-'a' to give indexing 0 to 25
        for(char c : s)
        map[c-'a']+= 1;
        /*
        traversing along the string
        cheking if any char is 1 it is unique
        returning that index from string
        */
        for(int i=0;i<s.length();++i)
        if(map[s[i]-'a'] == 1)
        return i;

        return -1;
    }
};
