class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        int n=paragraph.size();
        for(auto i=0;i<n;i++)
        {
            paragraph[i]= isalpha(paragraph[i]) ? tolower(paragraph[i]) : ' ' ;
        }
       // std::transform(paragraph.begin(),paragraph.end(),paragraph.begin(), ::tolower);
        istringstream a(paragraph);
        map<string, int> m;
        string s;
        while(a>>s)
        {
            m[s]++;
        }
        
        int p=m.size(),c=0,o;
        for(auto i: m)
        {
         o=1;   
         for(string r : banned)
            {
                if(r==i.first)
                    o=0;
            }
         if(o==1)
             if(c<i.second)
                    {
                        c=i.second;
                        s=i.first;
                    }
        }
        return s;
    }
};
