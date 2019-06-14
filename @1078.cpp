class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        vector<string> a,b;
        istringstream s(text);
        string ch;
        while(s>>ch)
        {
            a.push_back(ch);
        }
        int n=a.size();
        for(int i=0;i<n-2;i++)
        {
            if((a[i]==first)&&(a[i+1]==second))
                b.push_back(a[i+2]);
        }
        return b;
    }
};
