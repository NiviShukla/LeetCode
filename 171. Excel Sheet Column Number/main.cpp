class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        //traverse through string
        for(char c : columnTitle)
        {
            /*
            marking d as individual chars
            starting from 1
            */
            int d = c - 'A' +1;
            /*
            Ex: "ACD"
            then 1st A
            d = A- A +1 = 1
            result = 0*26+1 = 1
            then C
            d = C - A +1 = 2
            result = 2*26 +2  =54
            then D
            d = D - A +1= 3
            result = 54*26 + 3 = 1407
            */
            result = result *26 + d;
        }
        return result;
    }
};
