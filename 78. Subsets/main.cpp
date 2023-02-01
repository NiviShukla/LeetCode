class Solution {
public:
vector<vector<int>> ans;

    void sub(vector<int> &nums,int i,vector<int> temp)
    {
        /*
        first we take the temp array add it into the ans vector
        now we check for the nums
        EX: [1,2,3]
        we start from 0th index of the nums array
        recursive function called as i != nums.szie()
        now i = 1 i.e.[2]
        added to temp
        now i = 2 i.e. [3]
        [2] added to ans
        similarly for all other subsets
        */
        if(i == nums.size())
        {
            ans.push_back(temp);
            return;
        }

        sub(nums,i+1,temp);
        temp.push_back(nums[i]);
        sub(nums,i+1,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        sub(nums,0,temp);
        return ans;

    }
};
