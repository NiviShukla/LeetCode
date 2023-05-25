class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        /*
        we check for each digit and the max number of digit gives the
        number of decibinary number required
        Ex: 32
        for 2 we need 2 1s
        and for 3 we need 3 1s
        so the max numbers required is 3
        */
        for(char x : n)
        {
            int curr = x-48;
            ans = max(curr, ans);
        }
        return ans;
    }
};
