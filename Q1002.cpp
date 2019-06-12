class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        
        vector<int> cnt(26,0), mini(26,INT_MAX);
        for(auto i : A)
        {
            for(auto j : i)
                cnt[j-'a']++;
            
                for(int k=0;k<26;k++)
                {
                    mini[k]=min(mini[k],cnt[k]);
                    cnt[k]=0;
                }
            
        }
        vector<string> nums;
        for(int i=0;i<26;i++)
        {
            while(mini[i])
            {
                nums.push_back(string(1,i+'a'));
                mini[i]--;
            }
        }
        return nums;
    }
};
