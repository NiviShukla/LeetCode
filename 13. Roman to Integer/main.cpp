class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman;
        //first we map the given char to corresponding values
        roman.insert(make_pair('I',1));
        roman.insert(make_pair('V',5));
        roman.insert(make_pair('X',10));
        roman.insert(make_pair('L',50));
        roman.insert(make_pair('C',100));
        roman.insert(make_pair('D',500));
        roman.insert(make_pair('M',1000));
        /*
        Ex: MCMXCIV  length= 6
        we take result as last char i.e. V
        so result = 5
        now we traverse backward
        and if char at i > char at i+1
        we substract it
        else we add it
        So, at i = 5
        s[5] = I and s[6] = V i.e. IV
        we substract and get result =4
        similarly for s[4] =C = 100   i.e. CIV
        as 100>4 we add and get 104
        */
        int result = roman[s[s.length()-1]];
        for(int i = s.length()-2;i>=0;i--)
        {
            if(roman[s[i]] < roman[s[i+1]])
            result-=roman[s[i]];

            else
            result+=roman[s[i]];
        }
        return result;
    }
};
