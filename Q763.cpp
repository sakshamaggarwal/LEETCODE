class Solution {
public:
    vector<int> partitionLabels(string S) {
        
        int n=S.size();
        vector<int> a(26,0);        // **OR-> map<int,int> a;
        for(int i=0;i<n;i++)
        {
            a[S[i]-'a']=i;
        }
        
        int p=0,t=0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            p=max(p,a[S[i]-'a']);
            if(i==p)
            {
                v.push_back(i-t+1);
                t=i+1;
            }
        }
        return v;
    }
};
