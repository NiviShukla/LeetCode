class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.length();

        for(int i = 0;i<len;i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                //if the first value of string is a closing bracket then the stack is empty and string is unbalanced
                if(st.empty())
                return false;

                //otherwise we check for the closing bracket for every open bracket
                else if(s[i] == ')' && st.top() !='(')
                return false;

                else if(s[i] == '}' && st.top() !='{')
                return false;

                else if(s[i] == ']' && st.top() !='[')
                return false;

                else
                st.pop();
            }
        }

        if(st.empty())
        return true;
        else
        return false;

    }
};
