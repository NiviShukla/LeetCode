class Solution {
public:
    static bool check(string& s1, string& s2)
    {
        return (s1+s2)>=(s2+s1);
    }

    string largestNumber(vector<int>& nums) {

        //if the array is 0 then printing 0
        int x =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                x++;
            }
        }
        if( x == nums.size())
        return "0";
        
        //converting the vector into string for concatination
        vector<string> s(nums.size()," ");
        for(int i =0;i<nums.size();i++)
        {
            s[i]=to_string(nums[i]);
        }
        /*
        soritng the vector with 2 strings being compared 
        each time and then swapping
        Ex: [9,30,33]
        9 and 30 will give 930 as 309 is small
        then for 30 and 33
        3330 will be returned from thr check function
        as 3033 is small
        */
        sort(s.begin(),s.end(),check);

        string ans = "";
        //adding thr new string vector into answer string
        for(int i = 0;i<s.size();i++)
        {
            ans += (s[i]);
        }
        return ans;
    }
};
