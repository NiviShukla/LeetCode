class Solution {
public:
    int minPairSum(vector<int>& nums) {
        /*
        First we sort the vector so that we can make pairs
        ATQ,
        We have to traverse to n/2 ,n being the size of nums
        We take two pointers one starting from the index 0 and one from end
        We make pairs and then compare it with other pairs to obtain the maximun pair sum
        */
        sort(nums.begin(),nums.end());
        int i =0;
        int j = nums.size()-1;
        int n = nums.size();
        int maxi = -1;
        while(i < n/2)
        {
            maxi = max(nums[i++]+nums[j--],maxi);
        }
        return maxi;

    }
};
