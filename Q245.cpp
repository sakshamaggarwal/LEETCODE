class Solution {
public:
    int shortestWordDistance(vector<string>& words, string word1, string word2) {
        
        int sum=INT_MAX,a=INT_MAX,b=INT_MAX,o=0;
        for(int i=0;i<words.size();i++)
        {
           if(words[i]==word1)
            {
                if(word1==word2)
                {
                    b=a;        // swap - a,b
                    a=b;       
                }
                o=1;
                a=i+1;
           }
           else if(words[i]==word2)
                b=i+1;
            if(o!=0)
                sum=min(sum,abs(a-b));
        }
        return sum;
    }
};
