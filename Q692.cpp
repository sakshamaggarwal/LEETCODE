class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        map<string,int> m;
        for(auto w: words)
        {
            m[w]++;
        }
        int n=words.size();
        vector<vector<string>> v(n);
        for(auto i: m)
        {
            v[i.second].push_back(i.first);
        }
        vector<string> a;
        int n2=v.size(),p=0;
        for(int i=n2-1;k>0&&i>=0;i--)
        {
            if(v[i].empty())
                continue;
            p=min(k,(int)v[i].size());
            a.insert(a.end(),v[i].begin(),v[i].begin()+p);
            k-=p;
        }
        
        return a;
    }
};
