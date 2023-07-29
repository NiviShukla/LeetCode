class Solution {
public:

    /*
    We convert the time into integer so that we can substract the hours time
    from current and correct string
    */

    int time(string curr, int i , int j)
    {
        return (curr[i] - '0')*10 + (curr[j]- '0');
    }
    int convertTime(string current, string correct) {

        /*
        After extracting the hours and minutes of each correct and current time
        We take the hours difference
        As the difference will be from either 0 if the hours time is same to 23
        Since ATQ, current <= correct and always positive
        Now we have to calculate the minutes time
        First we find the difference
        and if the difference is less than 0
        Ex: current = 04:50 and correct 08:10
        Then we add 60 to the difference and lessen the hour by 1
        After that we check for the different values for 15, 5 and 1
        And keep on increasing the count operations
        */

        int h1 = time(current, 0 , 1);
        int h2 = time(correct, 0 , 1);
        int m1 = time(current, 3 , 4);
        int m2 = time(correct, 3 , 4);

        int h = h2-h1;

        int m = m2-m1;
        if(m < 0 )
        {
            m = 60 + m;
            h--;
        }

        int ans = h;

        while(m >= 15 )
        {
            m -= 15;
            ans++;
        }
        while(m >= 5 )
        {
            m -= 5;
            ans++;
        }
        while(m >= 1 )
        {
            m -= 1;
            ans++;
        }
        return ans;
    }
};
