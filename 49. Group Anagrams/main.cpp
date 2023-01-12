class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        int n=strs.size();
        string temp;
        /*
        keeping the string in temporary string
        sorting the element of the vector strs
        then pushing the temp value i.e. the element into the mapping of the sorted element
        EX:
        ["eat","ate","tan","nat"]
        temp=eat
        after sorting it is aet
        it maps to aet and pushes "eat" into it
        similarly "ate" maps to aet
        "tan" maps to ant
        "nat" maps to ant
        */
        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        vector<vector<string>> ans;
        /*
        now we traverse in the map and push into ans the vector strings
        according to the mapping
        */

        for(auto itr=mp.begin();itr!=mp.end();++itr)
        {
            ans.push_back(itr->second);
        }

        return ans;
    }
};
