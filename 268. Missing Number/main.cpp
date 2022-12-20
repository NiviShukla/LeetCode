class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        //taking a vector to check 0 to n
        vector<bool> check(n,false);
        for(int i = 0;i<n;i++)
        {
            check[nums[i]] = true;
        }
        int i =0;
        while(i<n)
        {
            if(check[i] == true)
            i++;

            else
            return i;
        }
        return i;
    }
};
