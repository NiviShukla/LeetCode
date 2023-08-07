class Solution {
public:
    /*
    First we need to convert the number to maximum and minimum to get the difference
    We can do that by taking the first digit that is not 0 and convert it to 9 to get the maximum number and
    First digit that is not 9 and convert it to 0 to get the minimum number
    After this we take the difference and return it
    */
    int convertnine(string& number)
    {
        for(int i =0 ;i <number.length();++i)
        {
            if(number[i] != '9')
            return i;
        }
        return 0;
    }

    int maxnum(string number, char nine)
    {
        for(char& ch : number)
        {
            if(ch == nine)
            ch = '9';
        }
        return stoi(number);
    }

    int minnum(string number, char one)
    {
        for(char& ch : number)
        {
            if(ch == one)
            ch = '0';
        }
        return stoi(number);
    }

    /*
    We convert the number into string
    Then take out the index that is not 9 and from the convertnine function
    This function return the index of the first digit that is not nine so that we can form the maximum number
    We have two functions to find the maximum and minimum number
    "maxnum" to convert the number[index of first non-nine digit of num]
    then convert it to 9 and return it
    "minnum" to convert the number to 0 from the index 0 of num
    */

    int minMaxDifference(int num) {
        string number = to_string(num);
        char nine = number[convertnine(number)];
        char one = number[0];
        int maxi = maxnum(number, nine);
        int mini = minnum(number, one);
        return maxi - mini;

    }
};
