class Solution {
public:
    int partitionString(string s) {
        /*
        We take atleast 1 substring if each character is unique
        Then we take a hashmap str and  iterate through the string s
        and if we find a character that already exist in the map we clear the set and increase the partition value by 1
        */
        int ans = 1;
        set<char>str;
        for( auto ch : s)
        {
            if(str.find(ch) != str.end())
            {
                str.clear();
                ans++;
            }
            /*
            This is to insert the next part of the string in map
            */

            str.insert(ch);
        }
        return ans;
    }
};
