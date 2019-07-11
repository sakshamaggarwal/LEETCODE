class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n=strs.size();
        map<string,vector<string>> m;
        string t;
        for(auto i: strs)
        {
            t=i;
            sort(i.begin(),i.end());
            m[i].push_back(t);
        }
        vector<vector<string>> v;
        for(auto i: m)
        {
            v.push_back(i.second);
        }
        return v;
    }
};
