class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        /*
        We take a stack and push if the string has '('
        Else when we get a ')' we check if the stack is not empty and the topmost element is '('
        If true then we pop
        Else we push ')'
        Finally we return the size of the stack giving the number of operations to make the parentheses valid
        Ex: "())(()))("
        i = 0 , pushed [(]
        i = 1 , stack is not empty and top is '(', so popped []
        i = 2 , stack is empty, so pushed [)]
        i = 3 , pushed [), (]
        i = 4 , pushed [), (, (]
        i = 5 , stack is not empty and top is '(', so popped [), (]
        i = 6 , stack is not empty and top is '(', so popped [)]
        i = 7 , stack is empty, so pushed [),)]
        i = 8 , pushed [), ), (]
        So as the stack has 3 invalid parentheses so we need 3 more to make them vaild
        i.e. we return the size of the stack
        */
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == '(')
            st.push(s[i]);

            else
            {
                if(!st.empty() && st.top() == '(')
                st.pop();

                else
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
