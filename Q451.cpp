class Solution {
public:
    string frequencySort(string s) {
        
        int n=s.length();
        unordered_map<char,int> m;
        vector<string> num(n+1,"");
        string abc;

        for(char i:s)
        {
            m[i]++;
            cout<<m[i]<<endl;
        }
        for(auto& it:m)
        {
            char a=it.first;
            int b=it.second;
            num[b].append(b,a);
        }
        for(int i=n;i>0;i--)
        {
            if(!num[i].empty())
                abc.append(num[i]);
        }
        
        return abc;
            
    }
};
