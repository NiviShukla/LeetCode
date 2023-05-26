class Solution {
public:
    int maxCoins(vector<int>& piles) {
        /*
        we first sort the piles
        as alice picks first so she will always get the biggest pile we get the second biggest
        so if the piles is sorted so  we get 2nd last then 5th from last and so on
        Ex: [9,8,7,6,5,1,2,3,4]
        after sorting we get [1,2,3,4,5,6,7,8,9]
        so from first set we take 2 biggest and 1 smallest i.e.
        [1,8,9] so alice take 9 we get 8 and bob gets 1
        then [2,6,7] so alice take 7 we get 6 and bob gets 2
        then [3,4,5] alice takes 5 we get 4 and bob gets 3
        so our total is 8+6+4=18
        */
        sort(piles.begin(),piles.end());
        int sum=0,i=piles.size()-2,j=0;
        while(j<piles.size()/3)
        {
            sum +=piles[i];
            j++;
            i-=2;
        }
        return sum;
    }
};
