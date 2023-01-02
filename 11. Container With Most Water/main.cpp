class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0;
        int r = height.size()-1;
        int ans=0;
        while(l<r)
        {
            /*
            Taking both height
            checking which is smaller
            multiply with distance between index
            */
            int lh = height[l];
            int rh = height[r];
            int mini= min(lh,rh);
            ans = max(ans,mini*(r-l));
            /*
            if lh is small then all the other capacity will be either
            equal or less than height[l]
            soo l++
            same goes with height[r]
            so r--
            */
            if(lh<rh)
            l++;

            else
            r--;
        }
        return ans;
    }
};
