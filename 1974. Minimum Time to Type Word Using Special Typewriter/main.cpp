class Solution {
public:
    int minTimeToType(string word) {
        int time=0;
        char a = 'a';
        int minn= 0;
        int k;
        /*
        First we take a dummy char at a and then substract it from the first character of the word
        k = b - a or k = a - b
        After that we check if it is greater or less than 13
        If it is less then minimun time is k
        or else it is 26 - k
        This is to ensure we are going anticlockwise in the typewriter
        Now we add the minimum time for each character in the word
        And at last add the time to write the word i.e. the length of the word
        */
        for(int i=0;i<word.length();i++)
        {
            char b = word[i];
            if(b > a)
            {
                k = b - a;
            }
            else
            {
                k = a - b;
            }
            if( k <= 13)
            {
                minn = k;
            }
            else
            {
                minn = 26 -k;
            }
            time +=minn;
            a = word[i];
        }
        time += word.length();
        return time;

    }
};
