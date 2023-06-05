class Solution {
public:
    vector<int> diStringMatch(string s) {
        int lp = 0, rp = s.size();
        /*
        We are using two pointer approach
        left pointer starts from 0
        right pointer starts from length
        we traverse through the string and when there is 'I' we allocate lp++ in ans vector
        when there is 'D' we allocate rp-- in ans vector
        atlast for the last index of vector
        we check the last index of string
        if it is 'I' we allocate lp
        if it is 'D' we allocate rp
        */
        vector<int> ans(s.size()+1);
        int index = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'I')
            {
                ans[index++]= lp++;
            }
            else
            {
                ans[index++]=rp--;
            }
        }
        if(s[s.size()-1] == 'I')
        ans[s.size()] = lp;

        else if(s[s.size()-1] == 'D')
        ans[s.size()] = rp;

        return ans;
    }
};
