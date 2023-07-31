#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int splitNum(int num) {
        vector<int> dummy;
        int n = num;
        /*
        We can convert the number into a vector and then sort it
        So that we can get the individual numbers to form num1 and num2
        */
        while(n > 0)
        {
            int check = n % 10;
            dummy.push_back(check);
            n = n / 10;
        }
        sort(dummy.begin(), dummy.end());

        vector<int> num1;
        vector<int> num2;
        /*
        Now we take alternate numbers to form num1 and num2 vectors so that we can calculate the minimum sum
        Ex: 29537
        On converting to vector and sorting we get:
        2,3,5,7,9
        Alternate adding to num1 and num2 vectors we get
        num1 = 2,5,9
        num2 = 3,7
        */
        for (int i = 0; i < dummy.size(); i++)
        {
            if (i % 2 == 0)
                num1.push_back(dummy[i]);
            else
                num2.push_back(dummy[i]);
        }

        int num1f = 0;
        int num2f = 0;
        /*
        Now we convert these vectors back to numbers and add them
        so num1 will be num1f = 259
        num2 will be num2f = 37
        And the answer will be 296 as the minimum sum
        */
        for (int i = 0; i < num1.size(); i++)
        {
            num1f = num1f * 10 + num1[i];
        }

        for (int i = 0; i < num2.size(); i++)
        {
            num2f = num2f * 10 + num2[i];
        }

        return num1f + num2f;
    }
};
