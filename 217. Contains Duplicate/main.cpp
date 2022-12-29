class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //First we mark the map with nums to 1
        unordered_map<int,int> mp;
        for(auto itr : nums)
        {
            mp[itr]++;
        }
        /*
         we check if any element of mp > 1
        then it is duplicate
        */
        for(auto itr : mp)
        {
            if(itr.second >1)
            return true;
        }
        return false;
    }
};
