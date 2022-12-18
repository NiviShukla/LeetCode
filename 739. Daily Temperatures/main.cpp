class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n=temperatures.size();
        vector<int> ans(n,0);
        /*
        traversing from the back to stack all index of temperatures
        trival for last temp gives 0 as no next temp is bigger
        */
        for(int i = n-1;i>=0;i--)
        {
            /*
            if not empty ans next element to push is bigger then
            current element from the stack is popped
            */
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
            st.pop();
            /*
            for the last element st.empty() is true  and st.top() is 7
            so ans[i] = 7 - 7 = 0
            */
            if(!st.empty())
            ans[i] = st.top()-i;

            st.push(i);
        }
        return ans;
    }
};
