class Solution {
public:
    bool isHappy(int n) {
        //creating set for storing values
        set<int>st;
        int val;
        int index;

        while(1)
        {
            val=0;
            while(n)
            {
                index=n%10;
                val+=index*index;
                n=n/10;
            }
            if(val==1)
            return true;
            /*
            if we end up in a loop
            EX: n=29 then val = 85
            then n=85 and val=89 <------|
            then n=245 and val=245      |
            then n=245 and val=42       |
            then n=42 and val=20        |
            then n=20 and val=4         |
            then n=4 and val=16         |
            then n=16 and val=37        |
            then n=37 and val=58        |
            then n=58 and val=89        |
            we get the same as line 23 -|
            then we return false
            */
            else if(st.find(val)!=st.end())
            return false;
            //if it is not present then we insert and make it the new n
            st.insert(val);
            n=val;
        }
        return false;

    }
};
