class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        /*
        We keep a record for each 5 and 10 dollar we recieve and give back
        if bill is 5 we add it to five
        if bill is 10 we add to ten but also decrease five as we return it to customer
        if bill is 20 and we have ten then we return 1 ten and 1 five
        else we return 3 five
        at last we check if our five count < 0 then we return false
        Because we will have no five to return
        ELse we return true
        */
        for(auto bill : bills)
        {
            if(bill == 5)
            five++;
            else if(bill == 10)
            {
                ten++;
                five--;
            }

            else if(ten > 0)
            {
                ten--;
                five--;
            }
            else
            five -=3;

            if(five < 0) return false;
        }
        return true;
    }
};
