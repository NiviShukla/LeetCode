class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi = INT_MIN;
        /*
        The most easy way to find the distance is to take a minimum distance between each of the colored house
        Store it in a variable and compare it with each of the other distances between the houses
        */
        for(int i =0;i<colors.size();i++)
        {
            for(int j =i+1;j<colors.size();j++)
            {
                if(colors[i] != colors[j])
                maxi = max(maxi, abs(i-j));
            }
        }
        return maxi;
    }
};
