class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        return false;

        else
        {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i =0;i<s.length();i++)
            {
                if(s[i] != t[i])
                return false;
            }
        }
        return true;


    }
};
