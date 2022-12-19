class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() < nums1.size())
        return findMedianSortedArrays(nums2,nums1);
        /*
        first vector should be smaller
        for checking number of element to be inside cut
        */

        int n1 = nums1.size();
        int n2 = nums2.size();

        int low = 0 , high = n1;

        while(low <=high)
        {
            /*
            cut1 will show how many elements from nums1
            similarly for nums2 from cut2
            */
            int cut1 = (low+high) >> 1;
            int cut2 = (n1 + n2 + 1)/2 - cut1;
            /*
            l1 gives last element from nums1 before the cut1 so cut1-1
            l2 gives last element from nums2 before the cut2 so cut2-1
            */
            int l1 = cut1 == 0 ? INT_MIN : nums1[cut1-1];
            int l2 = cut2 == 0 ? INT_MIN : nums2[cut2-1];
            /*
            r1 gives first element from nums1 after the cut1 so cut1
            r2 gives first element from nums2 after the cut2 so cut2
            */
            int r1 = cut1 == n1 ? INT_MAX : nums1[cut1];
            int r2 = cut2 == n2 ? INT_MAX : nums2[cut2];
            //this condition checks if the array after merging gives right values
            if(l1<=r2 && l2<=r1)
            {
                /*
                EX: nums1 : [7,12,14,15] nums2 : [1,2,3,4,9,11]
                after 1st cut we get cut1 = 2 then only 7 and 12 are included from nums1
                and from nums 2 we get 3 elements i.e. 1 2 and 3
                now l1 is 12    r1 is 14
                    l2 is 3     r2 is 4
                    as this is false we check condition in line 54
                */
                if((n1+n2) %2 == 0)
                return (max(l1,l2) + min(r1,r2))/2.0;

                else
                return max(l1,l2);
            }

            //if the condition is false we check if we have to go up or low
            else if(l1 > r2)
            {
            /*low by decreasing the high by cut1 -1
            to reduce the element for nums1 */
                high = cut1 - 1;
            }
            /*
            high by increasing the low by  cut + 1
            to increase the element for nums1*/
            else
            {
                low = cut1 + 1;
            }
        }

        return 0.0;
    }
};
