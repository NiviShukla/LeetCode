class Solution {
public:
    int minimumSum(int num) {
        vector<int> n;
        /*
        Take a vector and push the numbers and sort them
        Ex: 2392
        in vector = [2,3,9,2]
        after sorting
        [2,2,3,9]
        now taking 2 ints and putting the 1st two index values
        and then adding the next two values and making 2 numbers
        i.e. num1 = 10*n[0]+n[2] = 10*2 + 3 = 23
        num2 = 10*n[1]+n[3] = 10*2 + 9 = 29
        as the vector is sorted so the number formed will always be minimum
         */
        while(num)
        {
           int number=num%10;
            n.push_back(number);
            num=num/10;
        }
        sort(n.begin(),n.end());

        int num1 = 10*n[0]+n[2];
        int num2 = 10*n[1]+n[3];

        return num1+num2;
    }
};
