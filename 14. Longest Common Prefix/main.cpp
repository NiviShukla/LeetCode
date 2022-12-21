class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        //taking 1st string and checking for rest
        for(int i = 0;i<strs[0].length();i++)
        {
            char ch = strs[0][i];
            bool match = true;
            /*
            Ex: strs = ["flowers","flow","flight"]
            then each time ch will be 'f' then 'l' then 'o' ...
            checking each character from string1 to rest of string
            */
            for(int j = 1;j<strs.size();j++)
            {
                /*
                if size of the string being compared is less than the
                char being compared then break
                OR when it does not match with ch
                */
                if(strs[j].size() < i || ch != strs[j][i])
                {
                    match = false;
                    break;
                }
            }
            if(match == false)
                 break;

            else
                ans.push_back(ch);
        }
        return ans;

    }
};
