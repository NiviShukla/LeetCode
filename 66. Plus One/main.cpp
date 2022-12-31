class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num=digits.size();
        /*
        starting from last element
        we check if it is less than 9
        if yes then element++
        and digits is returned
        else if it is 9
        then its previous element++
        */
        for(int i=num-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            /*
            if digit[i]= 9
            then digits[i]=0
            */
            digits[i]=0;
        }
        vector<int> ans(num+1);
        ans[0]=1;
        return ans;
    }
};
