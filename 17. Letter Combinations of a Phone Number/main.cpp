class Solution {
    private:
    void solve(string digits,string output,int index,vector<string>& ans,string map[])
    {
        //base case if index is out of size
        if(index >= digits.length())
        {
            //we push whatever is in output into ans
            ans.push_back(output);
            return;
        }
        /*
        first we get the numeric value of string
        after that we get the value from mapping
        we run a loop
        EX: digit "23"
        we get number= 2 -'0'= int 2
        then value = map[2] = "abc"
        and push 'a' in output
        then recursively calls itself with index+1 i.e. for '3'
        we get number= 3 - '0' = int 3
        then value = map[3] = "def"
        pushes d in output giving ad
        similarly we get ae and af
        then it pops a
        and push b we get bd,be,bf
        and similarly we get cd,ce,cf
        */
        int number = digits[index] - '0';
        string value=map[number];

        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,map);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        return ans;
        string output;
        int index =0;
        string map[10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,map);
        return ans;
    }
};
