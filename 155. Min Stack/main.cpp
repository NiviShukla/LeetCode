class MinStack {
public:
    //taking stack to implement with a mini value
    stack<long long> st;
    long long mini;
    MinStack() {
        //initializing mini to max value
        mini = INT_MAX;
    }

    void push(int val) {
        if(st.empty())
        {
            //normal push to stack and apointing val to mini
            mini = val;
            st.push(val);
        }

        else
        {
            //if not empty check if val is less than mini
            if(val < mini)
            {
                // pushing modified value that will be used in line 41
                st.push(2LL * val * 1LL - mini);
            /*  if stack has [-2,0] and -3 is pushed
                As the val is less than previous mini then the value pushed will be 2 * val(i.e. -3) - mini(last mini i.e. -2)
                => 2 * (-3) - (-2)
                =>-6 +2 => -4
                So -4 will be pushed
                i.e. [-2,0,-4]
                and new mini becomes -3
            */
                mini = val;
            }
            else
            st.push(val);
        }
    }

    void pop() {
        if(st.empty())
        return;

        long long mod = st.top();
        st.pop();
        // modified value if less than mini then to find previous mini from line 25
        /*As the stack is [-2,0,-4]
        we need to pop -4 and the mini should change back to -2 from -3
        so we use 2 *(current mini i.e. -3) - (modified value i.e -4)
        => (2 * -3) +4
        => -2
        that was the previous mini
        ans stack is
        [2-,0]


        */
        if(mod < mini)
        mini = 2 * mini - mod;

    }

    int top() {
        if(st.empty())
        return -1;

        long long mod = st.top();

        if(mod < mini)
        return mini;

        return mod;

    }

    int getMin() {
        return mini;
    }
};
