class Solution {
public:
    bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<vector<string>>& pairs) {
        
        int a=words1.size(),b=words2.size();
        if(a==0&&b==0)
            return true;
        if(a!=b||a==0||b==0)
            return false;
        int c=pairs.size();
        bool k;
        
        for(int i=0;i<a;i++)
        {
            k=false;
            if(c==0)
            {
                if(words1[i]==words2[i])
                {
                    k=true;
                    continue;
                }
            }
            for(int j=0;j<c;j++)
            {
                if(words1[i]==pairs[j][0])
                    if(words2[i]==pairs[j][1])
                        k=true;
                
                if(words1[i]==words2[i])
                    k=true;
                
                if(words1[i]==pairs[j][1])
                    if(words2[i]==pairs[j][0])
                        k=true;
            }
            if(!k)
                return false;
        }
        return true;
    }
};
