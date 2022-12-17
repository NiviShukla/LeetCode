class Solution {
public:
    string countAndSay(int n) {
        //base case if n =1
        if(n == 1) return "1";
        //2nd case
        if(n == 2) return "11";

        string ans = "11";
        // loop starting from 3 going till n
        for(int i =3;i<=n;i++)
        {
            string t ="";
            ans = ans + '#';
            int c =1;
            for(int j = 1;j<ans.length();j++)
            {
                /* to check if the data is contineous like 111 or 22
                and then increasing the count for the data
                at last making count back to 1
                */
                if(ans[j] != ans[j-1])
                {
                    //to add the counter to empty t
                    t = t + to_string(c);
                    /*to add the number of the counter
                    i.e. 111 will give 3(count) and 1 at the end
                    */
                    t = t+ans[j-1];
                    c =1;
                }
                //if the data is not contineous then just increasing count
                else
                c++;
            }
            ans = t;
        }
        return ans;

    }
};
