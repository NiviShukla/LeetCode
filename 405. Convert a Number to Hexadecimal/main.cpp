class Solution {
public:
    string toHex(int num) {
        if(num == 0)
        return to_string(0);
        /*
        EX: num = 26
        first the number is divided by 16 to give remainder
        rem = 26%16 = 10
        digits[10] = a
        ans = a
        now num = 26/16 = 1
        now again rem = 1%16 = 1
        digits[1] = 1
        ans = a1
        num = 1/16 = 0
        now reversing the ans = 1a
        */

        unsigned int n = num;
        string digits = "0123456789abcdef";
        string ans = "";
        while(n > 0)
        {
            int rem = n%16;
            ans += digits[rem];
            n = n/16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
